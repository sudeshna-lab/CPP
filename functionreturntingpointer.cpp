#include <stdio.h>
#include<string>
#include<iostream>
using namespace std;

int* sumof2int(int *a, int *b)
{
    printf("inside function addressof a =%d\n", &a);
    printf("inside function adressof b =%d\n", &b);
    printf("inside function  b =%d\n", b);
    printf("inside function  *b =%d\n", *b);
    int *sum = (int*)malloc(sizeof(int));
    *sum = (*a)+(*b);
    printf("inside function adressof sum =%d\n", &sum);
    return sum;
    
   
    
}
int *arrsum(int arr[] , int n)
{
    return &arr[n/2];
    
}
int main()
{
   int arr[] = {1,2,3,4,5};
   int n = sizeof(arr)/sizeof(arr[0]);
   int *returnfromarray = arrsum(arr,n);
   printf("returnfromarray=%d\n", *returnfromarray);
   int a , b;
   a =10;
   b= 30;
   printf("addressof a =%d\n", &a);
   printf("adressof b =%d\n", &b);
   
   int* c = sumof2int(&a,&b);
   //dummyfuncn();
   printf("sum of two variable add=%d\n",  c);
   printf("sum of two variable=%d\n",  *c);
   
   
}