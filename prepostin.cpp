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
    struct node* left = NULL;
    struct node* right = NULL;
    
};

struct node* newnode(int idata)
{
    
    struct node* node = new struct node ;
    node->data = idata;
    node->left =NULL;
    node->right = NULL;
    
    return node;
    
};

void printpreorder(struct node* node)
{
    if(node == NULL)
    return;
    cout << node->data << " " << endl;
    printpreorder(node->left);
    printpreorder(node->right);
    
};
void printpostorder(struct node* node)
{
    if(node == NULL)
    return;
    printpostorder(node->left);
    printpostorder(node->right);
    cout << node->data << " " << endl;
    
};
void printinorder(struct node* node)
{
    if(node == NULL)
    return;
    printinorder(node->left);
     cout << node->data << " " << endl;
    printinorder(node->right);
   
    
};
int main()
{
    
    struct node* root = newnode(23);
    root->left = newnode(12);
    root->right = newnode(42);
    root->left->left = newnode(32);
    root->left->right = newnode(22);
    
    //cout << root->left->left->data << endl;
    
    cout << "\nPreorder traversal of binary tree is \n";
    printpreorder(root);
 
    cout << "\nInorder traversal of binary tree is \n";
    printinorder(root);
 
    cout << "\nPostorder traversal of binary tree is \n";
    printpostorder(root);
 
    return 0;
}
