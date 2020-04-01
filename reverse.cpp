/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* C++ Program - Merge Two Arrays */
		
#include <iostream>
#include<conio.h>
#include <bits/stdc++.h>
using namespace std;

/* C++ Program - Reverse Array */
		


int main()
{
	
	int arr[50], size, i, j, temp;
	cout<<"Enter array size : ";
	cin>>size;
	cout << "i bfr loop" << i << endl;
	cout<<"Enter array elements : ";
	
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
		cout << "i inside loop" << i << endl;
	}
	cout << "i outside loop" << i << endl;
	cout << i-1 << endl;
	j=i-1;  // now j will point to the last element
	i=0;   //  and i will be point to the first element
	while(i<j)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	cout<<"Now the Reverse of the Array is : \n";
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	getch();
}