#include <stdio.h>
#include<string>
#include<iostream>
using namespace std;
int add(int a, int b)
{
    
    return (a+b);
}
int sub(int a, int b)
{
    
    return (b-a);
}
typedef int (*myfunpointer)(int , int);
myfunpointer somefuntion(int type)
//int (*somefuntion(int type))(int , int)
{
    
    if (type == 1) return add;
    if (type == 2) return sub;
}
int main()
{
    int (*fun)(int, int);
    fun = somefuntion(1);
    int c =fun(2,3);
    printf("%d\n", c);
    
}