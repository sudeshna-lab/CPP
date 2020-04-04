/**************************************************************************************************************
links for reference
https://www.geeksforgeeks.org/structures-in-cpp/
https://www.geeksforgeeks.org/difference-c-structures-c-structures/?ref=rp
https://codescracker.com/cpp/cpp-structures-arrays.htm
https://www.codesdope.com/cpp-structure/

https://fresh2refresh.com/c-programming/c-structure-padding/
fr struure c-structure-padding
https://www.geeksforgeeks.org/struct-hack/
http://www.tutorialdost.com/Cpp-Programming-Tutorial/30-Cpp-Union.aspx
structure and class relation in details		
https://www.geeksforgeeks.org/structure-member-alignment-padding-and-data-packing/
*/

#include <iostream>
 using namespace std;
 
 struct example
 {
     
     int  data =8; // only for c++ initialise here
     char name[25]="Alvin Alexander";
     void printdata()  //only possible in c++ member function
     {
         
         cout << "data: " <<data << endl;
     }
     
     
 }ex; // global declaration 
struct records
{
    
    int x;
    
};
int main()
{
    example ex ; // only possiblein c++ in c struct is mandatory //
    example *ptr = &ex;  // structure pointer
    ptr->printdata();
    ex.printdata();
    records arr[10];
    for(int i= 0; i < 10 ;++i)
    arr[i].x = i+1;
    for(int j= 0; j <10 ; ++j)
     cout << arr[j].x  << endl;  // array of a structure
    
    
}
