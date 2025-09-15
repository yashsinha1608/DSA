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
node* reverse_LL(node* head){
    node* prev=NULL;
    node* temp=head;
    while(temp!=NULL){
        node* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;        
    }
    return prev;
}


bool palindrome(node* head){
    node* slow=head;
    node* fast=head;
    if(head==NULL || head->next==NULL) return true;
    while(fast->next!=NULL && fast->next->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;

    }
    node* newhead=reverse_LL(slow->next);
    node* first=head;
    node* second=newhead;
    while(second!=NULL){
        if(first->data!=second->data){
            reverse_LL(newhead);
            return false;
        }
first=first->next;
second=second->next;

    }
    reverse_LL(newhead);
    return true;
}