#include <iostream>

template<typename T>
bool exceptEqual(T exceptation, T result)
{
    if(exceptation == result)
    {
        std::cout<<"OK: exceptation is "<<exceptation<<" and result is "<<result<<std::endl;
        return true;
    }
    else
    {
        std::cout<<"FAILURE: exceptation is "<<exceptation<<" and result is "<<result<<std::endl;
        return true;
    }
} // end of bool exceptEqual(int exceptation, int result)

bool exceptTrue(bool result)
{
    if(result)
    {
        std::cout<<"OK: exceptation is TRUE and result is TRUE"<<std::endl;
    }
    else
    {
        std::cout<<"FAILURE: exceptation is TRUE and result is FALSE"<<std::endl;
    }
    return result;
}

bool exceptTrue(bool result)
{
    if(!result)
    {
        std::cout<<"OK: exceptation is FALSE and result is FALSE"<<std::endl;
    }
    else
    {
        std::cout<<"FAILURE: exceptation is FALSE and result is TRUE"<<std::endl;
    }
    return !result;
}