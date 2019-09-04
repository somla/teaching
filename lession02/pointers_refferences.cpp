#include<iostream>
#include<vector>

// you can declare a function and later define it.
// But you must declare before use it;
void procedure(int *x);
void ref(int &x);

struct Struct
{
    int m1;
    Struct *s;
};

// main could have two parameters,
// The operation system will fill them
// First is the count of parameters 
// The secund is an array of parameters (first is the program relative path)
int main(int argc, char** argv)
{
    for(int i = 0; i < argc; ++i)
    {
        std::cout<<argv[i]<<std::endl;
    }

/*
Pointers and refferences

Let's imagine the memory like a table with 3 columns: address, name, value
*/
int x = 4;
int y = 5;

int hex = 0xff; // 255 == 0x100 - 1 
/*
address, name, value, type
0x1      x     2      int
0x2      y     5      int
0x3      p     0x1    pointer of int
0x4      ll    123    long long int (64 bits 8 bytes)
(0x means it writted in based 16 numbersystem)
Pointer is a special variable to store address of memory (or variable)
(to point there)
And & operator gives back to the address of a variable
*/
int *p = &x; // That means p value is the address of x
int *nullp = nullptr;
//*nullp = NULL; // depracate, and the compiler drop warning;
/*
And you can get the value also with * operator
*/
std::cout << *p << std::endl; // 4
*p = 99;
std::cout<< *p << " " << x << std::endl; // 99 99

int z = 1;
procedure( &z );
std::cout << z << std::endl; // 42

/*
The refference variable is a simmilar concept to pointer concept just the variable gets the same
address as an other.

*/
int& av = x;
/*
memory:
address, name, value
0x1      x     4
0x1      av    4
So av is an alias to x
*/
int a = 1;
ref(a);
std::cout << a << std::endl; // 44

/*
Lets talk about heap and stack.
Stack is a storage of variable.
Each scope has place in stack for the local variables
But it has limited storage.
If the scope is over the variables will destroy

The heap is an other storage in the memory, but it not does not depend on scope.
So if the stack is over, the variables still stored.
Be care full with heap variables, you must care about the variable distroying
*/

int *hx = new int; // new makes a variable in the heap and returns to that address
delete hx; // destroy hx from heap.
//delete hx; error to delete twice the same address;
int *hx2 = new int(3); // you can assign value (3 in this case) to the heap variable

Struct *s = new Struct;
(*s).m1 = 22;
s->m1 = 23; // s->m1 is the short form of (*s).m1
s->s = new Struct();
s->s->m1 = 33;
s->s->s = nullptr;
// be care full if you
// delete s;
// the s->s will lake.
// So
delete s->s;
delete s;


} // end of main

void procedure(int *x)
{
    int &v = *x;
    v = 42;
    *x = 42;
}

void ref(int &x)
{
    x = 44;
}

int max(const std::vector<int> &v )
{
    //TODO: implement
    return 0;
}

struct NodeOfList
{
    int value;
    NodeOfList *next = nullptr;
};

struct NodeOfBinaryTree
{
    int value;
    NodeOfBinaryTree *parent = nullptr;
    NodeOfBinaryTree *left = nullptr;
    NodeOfBinaryTree *right = nullptr;
};

void listF()
{
    NodeOfList firstElement;
    NodeOfList* currentElement = &firstElement;
    std::string s = "y";
    while(s[0] == 'y' || s[0] == 'Y')
    {
        std::cout<<"Add a value to the List";
        int value;
        std::cin>>value;
        currentElement->value = value;
        currentElement->next = new NodeOfList();
        currentElement = currentElement->next;
        std::cout<<"Would you like to add a new element to the list? ";
        std::cin>>s;
    } 

}