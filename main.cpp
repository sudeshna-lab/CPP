#include <bits/stdc++.h>
using namespace std;

class base {
    
    public:
     int x ;
     base(int a )
     {
        x=a;
        cout << "Base Parameterized Constructor" << x << endl;
     }
     
};

class derive:public base{
    
    
    public:
    int j;
    
    derive(int c , int d ):base(d)
    {
       j = c;
       x = d;
       cout << "derived parametrised const" << j << "  " << x << "  " << endl;
          
    }
};

int main()
{
  base b(50);
  derive d(10,20);
  derive *ptr1 = &d;
  base *ptr2 = &b;
  cout << "deriveclass_var::" <<ptr1->j << "  " << endl;
  cout << "baseclass_var::" <<ptr1->x << "  " << endl;
  
  //cout << "deriveclass_var::" <<ptr2->j << "  " << endl;
  //cout << "baseclass_var::" <<ptr2->x << "  " << endl;
  

}