
/*******************************************************************************************
https://www.edureka.co/blog/vectors-in-cpp/

https://www.educba.com/c-plus-plus-vector-vs-array/

https://embeddedartistry.com/blog/2017/06/21/an-introduction-to-stdvector/

https://en.cppreference.com/w/cpp/language/raii


vector does scope bouded resource manegment(SBRM)

******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

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
    return 0;
}
