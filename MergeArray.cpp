/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int size1 , size2 , size , i , k;
    cout << "enter the size of first array" << endl;
    cout << "the size of array 1:" ;
    cin>> size1 ;
    cout << "enter the size of 2nd array" << endl;
    cout << "the size of array 2:" ;
    cin>> size2 ;
    size =size1 + size2;
    int arr1[size1], arr2[size2] , marge[size];
   
    cout << "enter elements of 1st array " << endl;
    cout << "elemets of 1st array :" ;
     for(i = 0 ; i<size1; i++)
    {
        cin>>arr1[i];
    }
    cout << "enter elements of 2nd array " << endl;
    cout << "elemets of 2nd array :" ;
    for(i = 0 ; i<size2; i++)
    {
        cin>>arr2[i];
    }
    cout <<"array1 :" << " ";
    for(i = 0 ; i<size1; i++)
    {
        cout<<arr1[i]  << endl;
    }
    
    cout <<"array2 :" << " ";
    for(i = 0 ; i<size2; i++)
    {
        cout<<arr2[i] << endl;
    }
    
    for(i = 0 ; i<size1; i++)
    {
        marge[i] = arr1[i] ;
        
    }
    for(i=0, k =size1; i<size2 && k <size ; i++ ,k++)
    {
        marge[k] = arr2[i];
    }
    cout << "new array after marging two : " << "" ;
    for(i=0 ; i<size; i++)
    {
        cout<< marge[i] << endl;
    }
    
    
    
    
    
    
    
    return 0;
}
