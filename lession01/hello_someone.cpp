#include <iostream>
#include <string>



int main()
{
    // This is an oneline comment, the compiler avoids it.

    /*
        This is a multiple line comment,
        The compiler avoids it.
    */
   std::cout
   <<"Hi, I'm Lajos"<<std::endl
   <<"What is your name?"<<std::endl;

   std::string name;
   std::cin>>name;

   // The line below writes Hello world to the standard output
    std::cout<<"Hello "<<name<<std::endl;
    // Same as above just use "using namespace std" so to write std is not necessary
    std::cout<<"Hello "<<name<<std::endl;
    return 0;
}
