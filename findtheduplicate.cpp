/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<iostream>
#include<memory>
using namespace std;


void findduplicate(int arr[], int no)
{
    int i , j =0;
    cout<<"Dublicate Values are: ";
    for(i=0; i<no; i++)
    {
     for(j=i+1;j<no;j++)
     {
     if(arr[i]==arr[j])
     {
      cout<<"\n"<<arr[i];
     }
   }
   }
    
}   
    
int main()
{
  int i,j,no;
  int arr[8]= {1,3,4,4,7,7,6,3};
  no = sizeof(arr)/sizeof(arr[0]);
  findduplicate(arr,no);
  
 }