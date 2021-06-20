/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
 
struct Node {
    int data;
    struct Node* next;
};
 
struct Node* head;
void  Print()
{
    struct Node* temp = head;
    while(temp!=NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << "\n" << endl;
}
void Insert(int data, int n)
{
    int i;
    struct Node* temp1  = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if(n == 1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    struct Node* temp2 = head;
    for(i=1;i<n-1;i++)
    {
        temp2 = temp2->next;
    }
   
    temp1->next = temp2->next;
    temp2->next = temp1;
}
void deleteit(int n)
{
    struct Node* temp1 = head;
    if(n == 1)
    {
        head = temp1->next;
        free(temp1);
        return;
    }
   
    for(int i =1;i<n-1;i++)
    temp1=temp1->next;
    struct Node* temp2 = temp1->next;
  
    temp1->next = temp2->next;
    free(temp2);
    
}
/*struct Node* removeduplicate(struct Node * head)
{
    struct Node*current = head , *next;
    if(head == NULL)return head;
    if(head->next == NULL) return head;
   
    
   
    while(current!=NULL)
    {
        if(current->data == current->next->data)
        {
            struct Node *temp =NULL;
            cout << "coming in" << endl;
            next = current->next->next;
           // free(current->next);
            temp = current->next;
            free(temp);
            current->next= next;
    
        }
        else
        cout << "coming out" << endl;
        current = current->next;
        
    }
    return head;
}*/
void reverselist()
{
    
    struct Node *current , *next , *prev;
    current = head;
    prev = NULL;
    while(current!=NULL)
    {
        next = current->next;
    }
    
    head =prev;
    
    
}

bool detectLoop()
int main()
{
    head = NULL;
    Insert(2,1);
    Insert(3,2);
    Insert(4,3);
    Insert(5,4);
    Insert(5,5);
    Insert(8,6);
    Print();
    deleteit(3);
    Print();
    reverselist();
    Print();
    return 0;
}
