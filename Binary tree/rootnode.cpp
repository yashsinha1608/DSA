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
bool getpath(node* root,vector<int>&arr,int x){
    if(root==NULL) return false;
    if(root->data=x) return true;
     if (getpath(root->left, arr, x) ||   // check left
            getpath(root->right, arr, x))     // check right
            return true;
            
    arr.pop_back();
    return false;
}

vector<int> solve(node* root,int b){
    vector<int> arr;
    if(root==NULL) return arr;
    getpath(root,arr,b);
    return arr;
}

int main(){

}