namespace Math
{
enum MATH_ERROR
{
    SHULD_BE_POSITIVE,
    INTEGER_OVERFLOW,
};

int                 abs(int x);
long long int abs(long long int x);
float              abs(float x);
double           abs(double x);

int power(int base, int ext);

}