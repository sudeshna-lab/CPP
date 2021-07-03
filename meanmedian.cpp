/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
void readnumber(vector<double>& numberlist,int numbers)
{
    
      double num;
      for(int i=0;i<numbers;i++)
      {
          cin >> num;
          numberlist.push_back(num);
          
          
      }
      for(const auto& e:numberlist)
      {
          cout << e << " ";
      }
    
}
double calculateMean(const vector<double>& numberlist)
{
    double sum = 0 , mean;
    for(unsigned int i = 0; i <numberlist.size(); i++)
    {
      sum = sum + numberlist[i];
        
    }
    
    mean = sum /numberlist.size();
    return mean;
}

double calculatemed(vector<double>& numberlist  )
{
    
    sort(numberlist.begin(), numberlist.end());
    cout << "after sorting" << "  " ;
    for(const auto& e:numberlist)
      {
          cout << e << "\n";
      }
    
    double median ;
    if(numberlist.size()%2 == 0)
    {
        median = (numberlist[numberlist.size()/2-1 ] + numberlist[numberlist.size()/2])/2;
    }
    else{
        median = numberlist[numberlist.size()/2];
    }
    
    return median;
    
}
int main()
{
    double input;
    cout << "how many numbers are there in the list" << endl;
    cin >> input;
    if (input < 1)
    {
        cerr << "ERROR:Please set atleast one number in a list" << endl;
        
    }
    int numbers = floor(input) ;
    vector<double>numberlist;
    cout << "please give" << numbers << "numbers" ;
    readnumber(numberlist,numbers);
    double mean = calculateMean(numberlist);
    cout << " " << "mean" <<  mean  << "\n";
    cout << "\n";
    double median = calculatemed(numberlist);
    cout << " " << "median" << median << "\n";
    return 0;
}
