/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <fstream>
#include <iostream>
#include<string>
using namespace std;
 
template<typename T1, typename T2>
  //T1 add(T1 a , T2 b)
  auto add(T1 a , T2 b)->decltype(a+b) // type deduction
  {
      
      return (a+b);
  }
      
      
      
int main()
{
    
    cout << add(1,1.8) << endl ;
    
}
  