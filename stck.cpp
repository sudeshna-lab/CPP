/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

#define SIZE 10
class stack
{
    
    int *arr;
    int top;
    int capacity;
    
 public :
  stack(int size = SIZE);  // constructor calling
  ~stack(); // distructor
  void push(int);
  int pop();
  int peek();
  int size();
  bool isempty();
  bool isfull(); 
  void display();
};

stack::stack(int size)
{
    arr = new int[size];
    capacity = size;
    top = -1;
    
}
stack::~stack()
{
    
    delete arr;

}

//function to add a element  x in arr
void stack::push(int x)
{
    if (isfull())
    {
        
        cout << "overflow\ntarminate program\n" << endl;
        exit(EXIT_FAILURE);
    }   
        cout<< "enter the elements to insert" << endl;
        top++;
        arr[top] = x ; // same as arr[++top] = x;
    
}

int stack::pop()
{
    
    if (isempty())
    {
        
        cout << "underflow\ntarminate program\n " << endl;
        exit(EXIT_FAILURE);
        
    }
    
    cout << "removing " << peek() << endl;
    
    // decrease stack size by 1 and (optionally) return the popped element
    --top;
    return arr[--top];
        
}
  //function to return top element in a stack   
    
 int stack:: peek()
 {
     
     if (!isempty())
    {
        
        cout << "underflow\ntarminate program\n " <<endl; 
        exit(EXIT_FAILURE);
        
    }
    return arr[top];
}
 
 //function to return the size of the stack   
 int stack:: size()
 {
     
     return top + 1;
 }
 
 
 //function to check if the stack is empty or not
 
 bool stack::isempty()
{
	return top == -1;	// or return size() == 0;
}
 // Utility function to check if the stack is full or not
bool stack::isfull()
{
	return top == capacity - 1;	// or return size() == capacity;
}
    
void stack::display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
         cout<<arr[i]<<" ";
         cout<<endl;
   } else
      cout<<"Stack is empty";
}



    
    

int main()
{
    stack pt(10);
    
    int ch , val;
    
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Check the stack is empty or not"<<endl;
   cout<<"5) Check the stack is full or not"<<endl;
   cout<<"6) print the top element of  stack"<<endl;
   cout<<"7) Exit"<<endl;
   
   do{
       cout << "please enter your choice" << endl;
       cin>> ch ;
       switch(ch)
       {
           case 1 : 
           cout << "enter the value to push" <<endl;
           cin >>val;
           pt.push(val);
           break;
           case 2:
           pt.pop();
           break;
           case 3:
           pt.display();
           break;
           case 4: 
           if(pt.isempty())
           cout << "stack is empty" << endl;
           break;
           case 5:
           if(pt.isfull())
           cout << "stack is full" << endl;
           break;
           case 6:
           pt.peek();
           break;
           case 7: 
           cout<<"Exit"<<endl;
           break;
           default: 
           cout<<"Invalid Choice"<<endl;
           
       }
     }while(ch!=6);
     
     return 0;
     
     
     
}
   

