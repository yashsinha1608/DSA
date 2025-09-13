#include<iostream>
#include<vector>
 
using namespace std;

class node{
    public:
    int data;
    node* next;

    public:
node(int x,node* y){
    data=x;
    next=y;
}
public:
node(int x){
    data=x;
    next=nullptr;
}
};
node* creation(vector<int> &arr){
node* head=new node(arr[0]);
node* mover=head;
for(int i=1;i<arr.size();i++){
    node* temp= new node(arr[i]);
    mover->next=temp;
    mover=temp;
}
return head;
}

bool cycle(node* head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
        if(slow==fast) return true;
    }
    return false;
}