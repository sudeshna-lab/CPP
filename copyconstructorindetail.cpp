/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<cstring>
using namespace std;
class CopyConstructor
{
    char *s_copy;
    public:
    CopyConstructor (const char *str)
    {
        s_copy = new char[16];  //Dynamic memory alocation
        strcpy(s_copy, str);
    }
    
    CopyConstructor (const CopyConstructor &str)
    {
        s_copy = new char[16]; //Dynamic memory alocation
        strcpy(s_copy, str.s_copy);
    }
    
    void concatenate(const char *str)
    {
        strcat(s_copy, str); //Concatenating two strings
    }

    ~CopyConstructor()
    { 
        delete [] s_copy;
    }

    void display()
    {
        cout<<s_copy<<endl;
    }
};
/* main function */
int main()
{
    CopyConstructor c1("Copy");
    CopyConstructor c2 = c1;    //copy constructor
    c1.display();
    c2.display();
    c1.concatenate("Constructor"); //c1 is invoking concatenate()
    c1.display();
    c2.concatenate("Constructor"); 
    c2.display();
    return 0;
}