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

node* segmentation(node* head){
    node* odd=head;
    node* even=head->next;
    node* evenhead=head->next;
    while(even!=NULL && even->next!=NULL){
        odd->next=odd->next->next;
        even->next=even->next->next;

        odd=odd->next;
        even=even->next;
    }
odd->next=evenhead;
return head;
}