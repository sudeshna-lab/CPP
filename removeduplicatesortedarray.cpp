/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int removeduplicate(int arr[], int size)
{
    int prev = 0;
    for(int i=0;i<size;i++)
    {
        
        if(arr[i]!= arr[prev])
        {
           arr[++prev] = arr[i];
          
        }
        
    }
    int count = prev + 1;
    return count;
    
}
int main()
{
    int arr[] = {1,2,2,3,3,4,5,5,6,7,8,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int newsize = removeduplicate(arr,size);
    for(int i =0 ;i<newsize;i++)
    {
        cout << arr[i] ;
    }
    return 0;
    

}
