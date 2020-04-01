/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <stdio.h>
using namespace std; 
int linerSearch(int arr[], int x,int size)
 {
     
     int i = 0;
     for(i=0;i<size;i++)
      if(arr[i] == x)
        return i;
        return -1;
         
 }        
 int binarySerch(int shortarr[], int l, int r, int x) 
 {  
     if(r>l)
     {
      int mid ;
      mid= (l +(r-l) /2);
       if(shortarr[mid] == x)
        return mid;
       if (shortarr[mid] > x)
        return binarySerch(shortarr,l,mid-1,x);
       
         return binarySerch(shortarr,mid+1,r,x) ;
       
     return -1;    
    
    }
 }
int main()
{
   int arr[] = {12,130,40,0,55,67,80};
   int shortarr[] = {20,30,40,50,60,70,80,90,};
   int size = sizeof(shortarr)/sizeof(shortarr[0]);
   int result ;
   int x;
   cout << "enter the element you want to seach" <<endl;
   cin>> x ;
   //result = linerSearch(arr,x,size);
   result =binarySerch(shortarr,0,size-1,x);
   (result == -1)? cout << "element is not present  " : cout << "element is present at index: " << result;
}
  
     
     
     
     
 