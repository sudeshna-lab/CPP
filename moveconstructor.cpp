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



void printf(int& i)
{
    
    cout << "Lvalue" << i << endl;
}
void printf(int&& i)
{
    
    
    cout << "Rvalue" << i << endl;
}
class exmp
{
    int *ptr;
    double *arr;
    int size;
    public:
    exmp()
    {
        cout << "cames into contructor" << endl;
        ptr = new int(10) ;
        arr = new double[30];
        
    }
    exmp(const exmp& obj)
    {  
        cout << "cames into copy contructor" << endl;
        this->ptr = new int ;
        *this->ptr = *obj.ptr;
        size = obj.size;
        arr = new double[size];
        for(int i =0 ; i< size; i++)
        {
            
            arr[i] = obj.arr[i];
        }
    
    }
     exmp( exmp&& obj)
    {  
        cout << "cames into move contructor" << endl;
        // this->ptr = new int ;
        *this->ptr = *obj.ptr;  
        obj.ptr = nullptr;
        size =obj.size;
        arr =obj.arr;
    
    }
    exmp& operator = (const exmp &obj)
    {
         cout << "come to assingmentoperator" << endl;
         *this->ptr = *obj.ptr;  
          return *this;
    }
    ~exmp()
    {
        cout << "distructor" << endl;
        delete ptr;
    }
    void changevalue()
    {
        *ptr = 20;
    }
    void print()
    {
        cout << *ptr << endl;
    }
};
int main()
{
  vector<exmp> vect;
  //vect.push_back(exmp());
  exmp p;
  exmp q;
  p =q;
  vect.push_back(move(p));
//exmp p;
//exmp q =p;
//q.changevalue();
//p.print();
//q.print();
//int a = 10;
//printf(20);
//printf(a);
    
    
    
}