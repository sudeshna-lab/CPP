/******************************************************************************

1.extra copy , insert with set 
2.

*******************************************************************************/
#include <stdio.h>
#include<iostream>
#include<set>
#include<cstring>
#include<vector>
using namespace std;



int main()
{
    
    char str[100] = "my name sudeshna";
   
    int pos = 0;
    int i = 0;
    int j = 0;
    j = strlen(str) - 1;
 //  while(str[++j]!='\0');
    
    cout << j << " " ;
    cout << "\n" ;
     while (i < j) {
          char temp = str[i];
          str[i] = str[j];
          str[j] = temp;
          i++;
          j--;
    }
    cout << str << " ";
    cout << "\n" ;
    strcat(str," ");
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==' ' && str[i+1]!= ' ')
        {
            for(int j=i; j>=pos;j--)
            cout << str[j];
            pos = i+1;
        }
        
    }
  
}    
    
    
    
    
    
