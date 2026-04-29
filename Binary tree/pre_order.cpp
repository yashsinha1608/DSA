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

vector<int> preorder(node* root){
    vector<int> res;
    if(root==NULL) return res;

    stack<node*> st;
    st.push(root);
    while(!st.empty()){
        root=st.top();
        st.pop();
        res.push_back(root->data);
        if(root->right!=NULL){
            st.push(root->right);
        }
        if(root->left!=NULL){
            st.push(root->left);
        }

    }
    return res;
}


int main(){
    
}