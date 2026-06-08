#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b =10;
    cout << "values before swapping  ::" << a <<  "," <<b << " ";
    
    a = a^b; // 5^10
    b = a^b; // 5^10^10
    a = a^b; // 5^10^5
    
    cout << "values after swapping  :: " << a << "," << b << " ";
    
    
    
    
}
