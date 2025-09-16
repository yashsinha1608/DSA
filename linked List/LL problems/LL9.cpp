#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
    int data;
    node* next;

    public:
    node(int x,node* y){
        data = x;
        next=y;
    }
    node(int x){
        data=x;
        next=nullptr;
    }
};

node* creation (vector<int> & arr){
    node* head=new node(arr[0]);
    node* mover=head;
    for(int i=1;i<arr.size();i++){
        node* temp= new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

node* middle(node* head){

    if(head==NULL || head->next==NULL) return NULL;
    node* fast=head;
    node* slow=head;
    fast=fast->next->next;

    while( fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    node* deleted=slow->next;
    slow->next=slow->next->next;
    delete deleted;


    return head;

}