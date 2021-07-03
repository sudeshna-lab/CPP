#include<iostream>
using namespace std;
 int thirdpartylib(int *x)
 {
    return  (*x + 10);
     
 }
 
int main()
{
    
const int a = 10;
cout << "adress of a" << " "<< &a << endl;
const int *p = &a;
cout << "value of p" << " "<< *p << endl;
//int *c = const_cast<int*>(p);
//*c = 15;
//cout << "value of p" << " "<< *p << endl;
//cout << "adress of c" << " "<< c << endl;
//cout << "value in c" << " " << *c << endl;
//***************example number 2****************//
/* when we are passing a constant variable to a function which only can accept non constant parameter 
then we can use constant cast but shd remembar thatthis variable we shd not change inside*/
int z = thirdpartylib(const_cast<int*>(p));

cout << "z::" << " " << z;
    
}