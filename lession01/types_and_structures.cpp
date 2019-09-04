#include <iostream>
#include <string>
#include <vector>

enum SELECTOR
{
    ERROR = -1,
    QUIT = 0,
    SUMOFNUMBERS1FROM1PROCEDURAL = 1,
    SUMOFNUMBERS1FROM1FUNCTIONAL = 2,
};

// Struct is a kind of container of atomic types
struct S
{
    int x;
    float y;
    bool z;
};

struct S2
{
    int id;
    S s;
};



int main()
{
    // basic (atomic) types

    // Char (only one char)
    char c = 'a';
    // char c2 = 'ab' error

    // Integer numbers
    int i = -12;
    short s = 2;
    unsigned short us = 4;
    unsigned int ui = -4; // it will be a big positive number
    long int li = 312323112; // the range is compiler depend. 
    //Usually same as int (int and long int is the same type)
    long long int lli = 32443342341; // Depend on compiler, but usually 2 times longer than int
    // (gcc int is 32 bit long long int is 64 bit)

    // real numbers
    float f = 0.1;
    double d = 0.1; // less error, bigger numbers;
    // Boolean (true or false)
    bool b1 = true;
    bool b2 = -3; // 0 is false otherwise true 

    

    // not atomic types

    std::string str = "Hello world";
    std::string str2 = "!";
    std::string str3 = str +str2;
    S st;
    st.x = 1;
    st.y = 4.0;
    st.z = false;


    // array
    int a[10];
    int intalma2 = 342;
    int intalma = 342;
    a[0] = 3;
    a[1] = 30;
    
    int matrix[2][7];

    a[0][0] = 3;

    std::vector<int> v(10);

    std::vector< std::vector<int> > vmatrix(10, 10);


    return 0;

}