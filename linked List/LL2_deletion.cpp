#include<iostream>
#include<vector>
using namespace std;

class node{
    public:

    int data;
    node* next;
public:
    node(int data1,node* next1){
        data=data1;
        next=next1;
    }

    node(int x){
        
        data=x;
        next=nullptr;
    }

};


node* creation(vector<int>& arr){
    node* head=new node(arr[0]);
    node* mover=head;
    for(int x:arr){
        node* newnode=new node(arr[x]);
        mover->next=newnode;
        mover=newnode;
    }
    return head;
}

node* insertion_start(node* head,int x){
    node* new1=new node(x,head);
    
return new1;
}


 int main(){
  vector<int> arr={12,5,7,6,4};
  node* head= creation(arr);
  head=insertion_start(head,9);
}