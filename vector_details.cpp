/*
size() – Returns the number of elements in the vector.
max_size() – Returns the maximum number of elements that the vector can hold.
capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
resize(n) – Resizes the container so that it contains ‘n’ elements.
empty() – Returns whether the container is empty.
shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements 
beyond the capacity.
reserve() – Requests that the vector capacity be at least enough to contain n elements.
filter_none
Modifiers:

assign() – It assigns new value to the vector elements by replacing old ones
push_back() – It push the elements into a vector from the back
pop_back() – It is used to pop or remove elements from a vector from the back.
insert() – It inserts new elements before the element at the specified position
erase() – It is used to remove elements from a container from the specified position or range.
swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
clear() – It is used to remove all the elements of the vector container
emplace() – It extends the container by inserting new element at position
emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector
.
all vector function in details

All Vector Functions :

vector::begin() and vector::end()
vector rbegin() and rend()
vector::cbegin() and vector::cend()
vector::crend() and vector::crbegin()
vector::assign()
vector::at()
vector::back()
vector::capacity()
vector::clear()
vector::push_back()
vector::pop_back()
vector::empty()
vector::erase()
vector::size()
vector::swap()
vector::reserve()
vector::resize()
vector::shrink_to_fit()
vector::operator=
vector::operator[]
vector::front()
vector::data()
vector::emplace_back()
vector::emplace()
vector::max_size()
vector::insert()
/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; //initialise a vector by push back
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(60);
    vector<int> k(3,30);// initialise a vector with same value for aspecific renge
    for(int j: k)
    cout << j << endl;
    for(int x: v)
    cout << x << endl;
    
    vector<int> v2{20,30,70}; // initialise vector t a time
    for(int l:v2)
    cout << l << endl;
    
    int arr[] =  {40,30,60,80,90}; // initialise from an array
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    vector<int> v3(arr,arr+n);
    
    for(int l: v3)
    cout << l << endl;
    
  //  vector<int> v4(v3);//copy
    vector<int> v4(v3.begin(),v3.end());
    for(int l:v4)
    cout << l << endl;
    cout << "Size : " << v3.size(); 
    cout << "\nCapacity : " << v3.capacity(); 
    cout << "\nMax_Size : " << v3.max_size(); 
  
    v3.resize(7);
    cout << "\nnew size : " << v3.size();
    
    if (v3.empty() == false) 
        cout << "\nVector is not empty"; 
    else
        cout << "\nVector is empty"; 
    
    v3.shrink_to_fit(); 
    cout << "\nVector elements are: "; 
    
    for(int y: v3)
    cout << y << endl;
    vector<int> vect;
   for(int i =0 ; i < 10;i++)
   vect.push_back(i*10);
   
  for(int j : vect)
  cout << j << endl;
   cout << vect.front() << endl;
   
   cout << vect.back() << endl;
   
   cout << vect.at(5) << endl;
   cout << vect[2] << endl;
   
     v3.assign(5,10);
     for(int y :v3)
     cout << y << endl;
     
     
     
}