/******************************************************************************
1. only the single instant through out the program
2.global access --- we can access it from any where from the code
3. no ownership --- no ownership freely can flow anywhere
4 lazy initialization
advantage --- save memory -- one object (time and memory)
single access --- logger(log info) and data bease connection (if multiple can corrupt the data base)
flexibility -- without making it global making it siggleton

used -- 
Multithreaded application , thread pull
database application -- logging
cinfugration seting -- game setting 

*******************************************************************************/
#include <fstream>
#include <iostream>
#include<string>
using namespace std;
 
class WmConfig
{
    static WmConfig* instance;
    int var1 , var2 , var3;
    WmConfig(): var1(12),var2(30),var3(56){}
    
    public:
    WmConfig(const WmConfig&) = delete ;
    WmConfig& operator=(const WmConfig&) = delete;
    
    static WmConfig* createInstance()
    {
        
        if( instance == NULL)
        instance = new WmConfig();
        return instance;
    }
    
    void getvar1()
    {
        cout << var1 << endl;
        
    }
    
    void getvar2()
    {
         cout << var2 << endl;
    }
    
    void getvar3()
    {
         cout << var3 << endl;
        
    }
    
    void setvar1(int x)
    {
      var1 = x;
        
    }
    
    void setvar2(int y)
    {
         var2 = y;
    }
    
    void getvar3(int z)
    {
        var3 = z;
        
    }
    void somefunction()
    {
        
        cout << var1 <<" " << var2 << " " << var3 << " " << endl;
        
    }
    void logerrorintofile(string texttowrite)
    {
        
        std::fstream myfile;
        myfile.open("C:\\Users\\sudesroy\\Desktop\\study",std::fstream::app);
        myfile << texttowrite ;
        myfile.close();
    }
    
};

 WmConfig * WmConfig::instance = NULL;

int main(){

    WmConfig *WmConfigptr1 = WmConfig::createInstance();
    WmConfigptr1->logerrorintofile("error1");
   //  WmConfig *WmConfigptr2 = WmConfig::createInstance();
   // WmConfig *wmconfig2 = WmConfigptr1;
  //  WmConfigptr2 = WmConfigptr1;
 //   wmconfig2->somefunction();
    WmConfigptr1->somefunction();
    WmConfigptr1->setvar2(45);
    WmConfigptr1->somefunction();
    return 0;
}
    
    
    

      
  