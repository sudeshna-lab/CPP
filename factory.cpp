/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string>
#include<iostream>
using namespace std;
enum fundtype{trusttype, trustunittype,sharetype};

class fund
{
    public:
    void virtual printfund() = 0;
    
};

class trust:public fund
{
    
    public:
    void printfund()
    {
        cout << "this is trust" << endl;
        
    }
};
class trustunit:public fund
{
    
    public:
    void printfund()
    {
        cout << "this is trustunit" << endl;
        
    }
};

class share:public fund
{
    
    public:
    void printfund()
    {
        cout << "this is share" << endl;
        
    }
};
class factory
{
    public:
    factory()
    {
        cout << "this is factory" << endl;
    }
    static fund* create(fundtype type)
    {
        switch(type)
        {
            case trusttype:
            return new trust();
            break;
            case trustunittype:
            return new trustunit();
            break;
            case sharetype:
            return new share();
            break;
        }
        
    }
};

int main()
{
    fundtype type = trustunittype;
    fund *ptr = factory::create(type);
    ptr->printfund();
    
    
}