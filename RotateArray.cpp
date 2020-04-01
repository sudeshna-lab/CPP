/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std; 

/* Function to reverse arr[] from start to end*/
void rotatearryleftbyone(int arr[], int n) 
{ 
	
	int temp = arr[0]; 
	int i;
	for(i=0;i<n-1;i++)
	arr[i] = arr[i+1];
	arr[i] = temp;
	
	
}	 
void rotatearryrightbyone(int arr[], int n) 
{ 
	
	int temp = arr[n-1]; 
	int i;
	for(i=n-1;i>0;i--)
	arr[i] = arr[i-1];
	arr[0] = temp;
	
	
}	 

/* Utility function to print an array */
void printArray(int arr[], int size) 
{ 
for (int i = 0; i < size; i++) 
cout << arr[i] << " "; 
cout << endl; 
} 

void rotatearr(int arr[], int pos, int n)
{
    for (int i = 0; i < pos ; i++) 
    //rotatearryleftbyone(arr,n);
    rotatearryrightbyone(arr,n);
    
}
/* Driver function to test above functions */
int main() 
{ 
	int arr[] = {1, 2, 3, 4, 5, 6}; 
	
	int n = sizeof(arr) / sizeof(arr[0]); 
   int pos;
	// To print original array 
	printArray(arr, n); 
	cout<< "eter the pos to rotate the array" << endl;
	cin>> pos;
	cout << "rotate the array by ::  "<< pos <<endl;
	// Function calling 
   // rotatearryleftbyone(arr,n);
    rotatearryrightbyone(arr,n);
    rotatearr(arr,pos,n);
	// To print the Reversed array 
	printArray(arr, n); 
	
	return 0; 
} 
