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
    int var1 , var2 ;
    public:
    anywhere(int x=0 ,int y=0)
    {
        var1 =x;
        var2 =y;
        
    }
    void print()
    {
        
        cout << var1 << " " << var2 << endl;
    }
    anywhere operator+(const anywhere&obj)
    {
         anywhere a;
         a.var1= var1 + obj.var1;
         a.var2= var2 + obj.var2;
         return a;
    }
    anywhere add(const anywhere&obj)
    {
         anywhere a;
         a.var1= var1 + obj.var1;
         a.var2= var2 + obj.var2;
         return a;
    }
};
/*anywhere add(anywhere &obj1 )
{
    anywhere where;
    where = obj1.var + obj1.var;
    return where;
        
}*/
    
int main()
{
   
    anywhere any1(10,20);
    anywhere any2(20,30) ;
    any1.print();
    any2.print();
    //anywhere any3 = -any1;
   // anywhere any3 = any1 +any2;
   anywhere any3= any1.add(any2);
    any3.print();
}