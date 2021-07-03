#include <iostream>
using namespace std;

class base 
{ 
    int a, b;
    public:
    void getvalue();
    void putvalue();
    base sum(base obj2);
};
   void base::getvalue()
   {
       cout << "please enter the number for a " << " " ;
       cin >> a;
       cout << "please enter the number for b " << " " ;
       cin >> b;
       
   }
   void base::putvalue()
   {
      cout << "adress for a" << &a << " ";
      cout << a<< " " ;
      cout << b << " " ;
       
   }
    
   base base::sum(base obj2)
   {  
       base obj3;
       obj3 = a + obj2.a;
       obj3 = b + obj2.b;
       
       return obj3;
       //cout << "sum of two a" << " " <<suma << " ";
       //cout << "sum of two b" << " "  << sumb << " ";
       
   }


int main()
{
    base obj1;
    obj1.getvalue();
    obj1.putvalue();
    //cout << "adress for a" << &a << " ";
    base obj2;
    obj2.getvalue();
   // cout << "adress for a" << &a << " ";
    obj2.putvalue();
  
   
   base obj3;
   obj3 = obj1.sum(obj2);
   obj3.putvalue();
}