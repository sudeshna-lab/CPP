/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*
 *  This is to demostrate dynamic memory in c/C++
 * http://man7.org/linux/man-pages/man3/malloc.3.html
 * https://stackoverflow.com/questions/20094394/why-do-we-cast-return-value-of-malloc
 * https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/
 */
 
 #include<iostream>
 #include<cstring> //for memset
 //#include<stdlib.h>   /*For dynamic memory C-Style needed in C compiler */
 using namespace std;
 int main()
 {
     /*C-Style Dynamic memory memory */
      
    /*-----------malloc---------  
    void* malloc(byte-size);
    */
    
    int     *pDMemory   =   nullptr ,
            *pDMemory_2 =   nullptr ,
            *pTmp       =   nullptr ,
            *pTmp2      =   NULL    ; 
      
      /* This line will work only in C compiler not in C++ Compiler 
         malloc returns a void pointer (void *), which indicates that it is a pointer to a region of unknown data type. 
         The use of casting is required in C++ due to the strong type system, whereas this is not the case in C 
    pDMemory  = malloc(100*sizeof(int)); */
    
    
    /* mallco will return allocated undefined dataType memory chunk without initilization , 
        in case if failure it will return NULL
        To handle memory allocation exception  in more deep, we can use 
            * M_CHECK_ACTION 
            * https://stackoverflow.com/questions/27451220/how-can-i-correctly-handle-malloc-failure-in-c-especially-when-there-is-more-th
    */
    
    
    
   /* https://stackoverflow.com/questions/21104899/c-pointer-address-printing/ pointer and addressin */
   /*https://stackoverflow.com/questions/25802322/understanding-of-pointers-with-malloc-and-free/
   https://stackoverflow.com/questions/25205900/c-declaring-variables-and-calling-malloc
   https://stackoverflow.com/questions/19435433/what-happens-if-i-use-malloc-twice-on-the-same-pointer-c
   https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/
   
   
   