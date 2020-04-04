/******************************************************************************
this is the basic example of using switch statement in our program
for billing system accornding to order placed for
 ****************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   cout << "--------------------------------------------" << endl;
   cout << "................Today's MENU ..............." << endl; 
   cout << "--------------------------------------------" << endl;
   cout << "P = PIZZA , B = BURGER , F = FRIES , D = DIPS" << endl;
   
   char order ;
   int quan;
   cout <<"please enter your order here" << endl;
   cin >> order ;
   switch(order)
   {
       case 'P' : cout << "order for pizza ,plase enter the quntity" << endl;
       cin >> quan ;
       cout << "total bill is " << quan *200 <<"rs" << endl;
       break;
       case 'B' : cout << "order for Burger ,plase enter the quntity" << endl;
       cin >> quan ;
       cout << "total bill is " << quan *300 <<"rs" << endl;
       break;
       case 'F' : cout << "order for Fries ,plase enter the quntity" << endl;
       cin >> quan ;
       cout << "total bill is " << quan *100 <<"rs" << endl;
       break;
       case 'D' : cout << "order for Dips ,plase enter the quntity" << endl;
       cin >> quan ;
       cout << "total bill is " << quan *50 <<"rs" << endl;
       break;
   }
   
   
}
