#include"math.h"
namespace Math
{

int abs(int x)
{
    return x >=0 ? x : -1*x;
}

long long int abs(long long int x)
{
    return x >=0 ? x : -1*x;
}
float abs(float x)
{
    return x >=0 ? x : -1*x;
}
double abs(double x)
{
    return x >=0 ? x : -1*x;
}



int power(int base, int ext)
{
    if(0 == ext)
        return 1;
    if(ext < 0)
        throw MATH_ERROR::SHULD_BE_POSITIVE;
    int q = 1;
    for (int i = 0; i < ext; i++)
        q *= base;
    return q;
} // end fo power(int base, int ext)

long long int power(long long int base, long long int ext)
{
    if(0 == ext)
        return 1;
    if(ext < 0)
        throw MATH_ERROR::SHULD_BE_POSITIVE;
    int q = 1;
    for (long long int i = 0; i < ext; i++)
    {
        q *= base;
        if( base > 0 && q < 0)
            throw MATH_ERROR::INTEGER_OVERFLOW;
    }
    return q;
} // end fo power(long long int base, int ext)
}
