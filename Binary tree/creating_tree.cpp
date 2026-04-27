#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=right=NULL;
    }
};

    // Build this tree:
    //        1
    //       / \
    //      2   3
    //       \
    //        5

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->left->right=new node(5);
    root->right =new node(3);

     // verify
    cout << root->data << endl;           // 1
    cout << root->left->data << endl;     // 2
    cout << root->right->data << endl;    // 3
    cout << root->left->right->data << endl; // 5


}