#include<iostream>
#include<vector>
using namespace std;

class node{

    public:
    int data;
    node* next;
    node* back;
     
    node(int x,node* next1,node* back1){
        data=x;
        next=next1;
        back=back1;
    }

    node(int x){
        data=x;
        next=nullptr;
        back=nullptr;
    }
};

node* creation_of_dll(vector<int>& arr){
    node* head=new node(arr[0]);
    node* mover=head;

    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i],nullptr,mover);
        mover->next=temp;
        mover=temp;
    }

    return head;
}

node* insertion_before_head(node* head,int x){
    node* newhead=new node(x,head,nullptr);
    head->back=newhead;

    return newhead;
}

node* before_tail(node* head,int x){
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node* prev=temp->back;
    node* insert=new node(x,temp,prev);
    prev->next=insert;
    temp->back=insert;

    return head;
}

int main(){

}