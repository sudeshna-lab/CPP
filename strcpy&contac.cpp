/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
 
 
/***pass by value and pointer and refrence and passing array as function parameter***/

/** char array **/
void print( char *string)
{
    char str[100] = "souvik";
    int i , j ;
    
    i = strlen(str);
    for(j=0; string[j] != '\0' ; i++, j++)
    {
        
        str[i] = string[j];
    }
   
    str[i] = '\0';
    int k = 0;
    while(str[k] != '\0')
    {
        cout <<str[k] << " " ;
       k++;
    }
    /*while(*string != '\0')
    {
       cout << *string << " " ;
       string++;
    }
    
    while(string[i]!='\0' )
    {
        str[i] = string[i];
        i++;
    }
    str[i]='\0'; */
    
   
    
};

int main()
{
    
    char str[] = "Sudeshna";
    print(str);
    
    
    
}