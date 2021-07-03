/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
 
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
 struct node* newNode(int idata)
 {
     struct node* node = new struct node;
     node->data = idata;
     node->left = NULL;
     node->right=NULL;
     return node;
     
}
 
 int main()
 {
     struct node *root = newNode(28);
     root->left = newNode(12);
     root->right = newNode(34);
     cout << root->left->data << endl;
     
 }