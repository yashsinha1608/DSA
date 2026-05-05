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

int findMin(node* root) {
    if (root == NULL) return -1;
    while(root->left!=NULL){
        root=root->left;
    }
    return root->data;
}
int findMax(node* root) {
    if (root == NULL) return -1;
    while(root->right!=NULL){
        root=root->right;
    }
    return root->data;
}

int main(){

}