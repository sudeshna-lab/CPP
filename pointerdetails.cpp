#include <stdio.h>
#include<string>
#include<iostream>
using namespace std;


int main()
{
   
   int *p , i , n;
    printf("%d\n",sizeof(p));
   printf("enter size of array\n");
   scanf("%d",&n);
   p =(int*)malloc(n*sizeof(int));
   printf("enter the array element\n");
   for(i=0;i<n;i++)
   scanf("%d",&p[i]);
    printf("print the array element\n");
    for(i=0;i<n;i++)
    {
        
        printf("%d\n",p[i]);
    }
    
    printf("%d\n",&p);
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",*(p+1));
    printf("%d\n",sizeof(p));
   
}