/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class coordinate
{
    private:
		float longitude, latitude;
       //int time;
       int hr,min,sec;
	public:
		
		//parameterized constructor with default argument
		coordinate(float longitude, float latitude, int hr, int min,int sec)
		{
			this->longitude=longitude;
			this->latitude= latitude;
			this->hr=hr;
			this->min=min;
			this->sec=sec;
		}
		
		//function to display values
		void display()
		{
			cout<<longitude<<"\n"<<latitude <<"\n"<< hr <<"\n"<< min << "\n" << sec <<"\n"<<endl;
		}		
};


int main()
{
	
	int i = 0;
	//array of class objects declaration
	coordinate location[5]={coordinate(15.37,17.85,2,20,10),
                           coordinate(23.45,45.67,3,40,43),
                           coordinate(34.45,32.45,1,34,57),
                           coordinate(67.89,44.67,6,30,23),
                           coordinate(78.90,45.56,1,50,59)};
	
    for(i=0;i<5;i++)
	{
	  location[i].display();
	  
	}
    return 0;
}