#include <stdio.h>
#include<string>
#include<iostream>
using namespace std;

int add(int a,int b)
{
    return (a+b);
}
int sub(int a , int b)
{
    
    return (a-b);
}

//int fun(int (*funcptr)(int, int))
//{
//    int c = funcptr(2,3);
//}

int (*onefunc(int type))(int, int)
{
    
    if (type == 1 )
    return add;
    if (type == 2)
    return sub;
}
int main()
{
   
int (*funcptr)(int, int) ;

funcptr = onefunc(2);
int c =funcptr(1,2);
//funcptr = add;
//int c = funcptr(2,3);
//int d = fun(add);
printf("%d\n", c);
}