/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<iostream>
using namespace std;

class anywhere
{
    protected:
    int var ;
    public:
    anywhere(int x)
    {
        var =x;
        
    }
    virtual void print()
    {
        cout  << " " << var << endl;
    }
    
};
class somewhere:public anywhere
{
    
    int var1;
    public:
    somewhere(int x, int y):anywhere(x)
    {
        
        var1 = y;
    }
    
    void print()
    {
        cout  << " " << var << " " << var1 << endl;
    }
};
void somefunction(anywhere obj)
{
    obj.print();
    
    
}
int main()
{
    anywhere *ptr ;
    anywhere any(10);
    somewhere some(20,30);
   // somefunction(any);
    somefunction(some);
    //some.print1();
}