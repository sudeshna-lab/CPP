/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<limits.h>
using namespace std;
void printf(int arr[] , int size)
{
    
    cout << "array from function" << endl;
    for(int i =0; i<=size-1; i++)
    {
        
        cout   << arr[i] << "  " ;
    }
    
   
}
void printbypointer(int * arr , int size)
{
    
    cout << "array from function" << endl;
    for(int i =0; i<=size-1; i++)
    {
        
        cout   << arr[i] << "  " ;
    }
    
   
}
template <size_t N> // template for size N
void printbyrefernce(int (&arr)[N] )
{
    
    cout << "array from function" << endl;
    for(int i =0; i<N; i++)
    {
        
        cout   << arr[i] << "  " ;
    }
    
   
}
void printbywholepointer(int (*arr)[5] )
{
    
    cout << "array from function" << endl;
    for(int i =0; i<5; i++)
    {
        
        cout   << arr[i] << "  " ;
    }
    
   
}


int main()
{
    int size;
    cout << "enter size of array" << "" ;
    cin>> size;
    int arr[size];
    cout << "please enter the elements of array" << "  " ;
    for(int i=0; i <=size-1; i++ )
    {
        
        cin>>arr[i];
        
    }
    cout << "size ::" << size << "size -1" << size-1 << endl;
    
    printf(arr, size);
    printbypointer(arr, size);
    int array[5];// when we pass by reference size cant be declare as run time we have to pass the size to compiler
    
    printbyrefernce(array);
    int arr2[5];
    printbywholepointer(&arr2);
    cout << "size of the array" << size << endl;
    for (int i=0; i<=size-1;i++)
    {
        cout << arr[i]   << "" ;
        
    }
    
    int largest_element = INT_MIN;
    for(int i=0;i<=size-1;i++)
    {
        if(arr[i] > largest_element )
        {
            largest_element = arr[i];
        }
    }
    
    cout << "largest_element" << largest_element << " " << endl;
    
    
}

