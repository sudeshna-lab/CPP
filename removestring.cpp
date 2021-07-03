/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
   string str ;
   string result = " " ;
   cout << " please enter the string " ;
   cin>> str;
   cout << str << "\n";
   cout << str.length() << "\n";
   int hash[123]={0};
   for(int i=0;i<str.length();i++)
   {
       if(hash[str[i]] == 0)
       {
           hash[str[i]] = 1;
           result+=str[i];
          
       }
       
   }
   
   
   cout << result << "\n";
       }
       
   

