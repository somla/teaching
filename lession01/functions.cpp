#include<iostream>
enum SELECTOR
{
    ERROR = -1,
    QUIT = 0,
    SUMOFNUMBERS1FROM1PROCEDURAL = 1,
    SUMOFNUMBERS1FROM1FUNCTIONAL = 2,
};


int sumOfNumbers1From1Procedural(int to, int step = 1)
{
    int sum = 0;
    for(int i = 1; i<= to; i = i + step )
    {
        sum += i;
    }
    return sum;
}

int thesamething(int to, int step = 1)
{
    int sum = 0;
    int i = 1;
    while (i<= to)
    {
        sum += i;
        i += step;
    }
    return sum;
}

int sumOfNumbers1From1Functional(int to, int step = 1)
{
    return (to <= 0)? 0:to + sumOfNumbers1From1Functional(to - step, step);
}

SELECTOR selector()
{
    std::cout<<"What would you like to do?"<<std::endl
             <<"0. quit"<<std::endl
            <<"1. sumOfNumbers1From1Procedural"<<std::endl
             <<"2. sumOfNumbers1From1Functional"<<std::endl
             <<std::endl
             <<"Please choise"<<std::endl;
    int selected;
    std::cin>>selected;
    if (selected < 0 || selected > 2)
    {
        std::cout<<"Please choise from 0 to 2\n"<<std::endl;
        return SELECTOR::ERROR;
    }
    return (SELECTOR) selected;
}

bool main2(SELECTOR selected)
{
    switch(selected)
    {
        case SELECTOR::QUIT:
            return false;
            break;
        case SELECTOR::ERROR :
            return true;
            break;
        default:
            std::cout<<"everything is ok, so I continue to run"<<std::endl;
    }

    int to;
    int step;
    std::cout<<"to: ";
    std::cin>>to;
    std::cout<<"step: ";
    std::cin>>step;
    int result;
    switch(selected)
    {
        case SELECTOR::SUMOFNUMBERS1FROM1FUNCTIONAL:
            result = sumOfNumbers1From1Functional(to, step); 
            break;
        case SELECTOR::SUMOFNUMBERS1FROM1PROCEDURAL:
            result = sumOfNumbers1From1Procedural(to, step);
            break;
        default:
            std::cout<<"Error"<<std::endl;
            break;
    }
    std::cout<<"Result: "<<result<<std::endl;
    std::cout<<std::endl;
    return true;
}

int main()
{
    SELECTOR selected;
    do {
        selected = selector();
    }
    while( main2(selected) );

    int i = 10;

    while(i)
    {
        std::cout<<( i-- )<<std::endl;
    }
    std::cout<<"quit"<<std::endl;
    /*
    std::cout<<sumOfNumbers1From1Functional(10)<<std::endl
             <<sumOfNumbers1From1Procedural(10)<<std::endl;

    //*/
    return 0;
}