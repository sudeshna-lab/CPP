/*https://www.geeksforgeeks.org/passing-reference-to-a-pointer-in-c/*/

#include <iostream> 
  
using namespace std; 


int glob_variable = 50;

void change_variable_value( int *ptr)
{
   ptr = &glob_variable;
   /*problem comes when you modify the pointer inside the function.
   Instead of modifying the variable, you are only modifying a copy of the pointer 
   and the original pointer remains unmodified.
   /* *prt = glob_variable; this will work fine /*/
}


void chage_varable_with_double_pointer(int **ptr)
{
    
     *ptr = &glob_variable;
    
}
void chage_varable_with_ref_pointer(int *&ptr)
{
    
     ptr = &glob_variable;
    
}
int * change_with_retrun_pointer()
{
    
    return &glob_variable ;
}

int & change_with_retrun_ref()
{
    
    return glob_variable ;
}
int main()
{
    int loca_variable = 25;
    int *ptr = &loca_variable;
    cout << "lcal varable before callig the function" << *ptr <<endl;
   //calling function
  // change_variable_value(ptr);     // passing  pointer
 //  chage_varable_with_double_pointer(&ptr); //passing **pointer
  // chage_varable_with_ref_pointer(ptr); //passing ref
  
 // ptr = change_with_retrun_pointer(); return poinrter;
 
    ptr = &change_with_retrun_ref();
    cout << "lcal varable after callig the function" << *ptr <<endl;
    
}  
    
    
    
    
    
    
