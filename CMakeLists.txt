cmake_minimum_required(VERSION 3.12)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# this is in here in case you have issues about not using the latest C++
#add_compile_options(-std=c++17) 

add_library (applibrary SHARED whattotest.cpp)
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests tests.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread applibrary) 

add_executable(runMain main.cpp)
target_link_libraries(runMain applibrary)

