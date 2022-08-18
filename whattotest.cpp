// whattotest.cpp

#include "whattotest.h"
 
WidgetWithArrays::WidgetWithArrays() : m_count(0)
{
    
}

 
void WidgetWithArrays::storeInteger(int a)
{
    //TODO:

}

int WidgetWithArrays::sum()
{
    int retVal = 0;
    //TODO:

    return retVal;
}
 

WidgetWithVector::WidgetWithVector()
{


}

void WidgetWithVector::storeInteger(int a)
{
    m_vector.push_back(a);

}

int WidgetWithVector::sum()
{
    int retVal = 0;

    for(int n : m_vector)
    {
        retVal = retVal +n;
    }


    return retVal;
}
 


