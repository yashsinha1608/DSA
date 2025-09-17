#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* back;

    node(int x,node* next1,node* back1 ){
        data=x;
        next=next1;
        back =back1;
    }
    node(int x){
        data=x;
        next=nullptr;
        back=nullptr;
    }
};

node* creation_DLL(vector<int>& arr){
    node* head=new node(arr[0]);
    node* mover=head;
    for (int i=1;i<arr.size();i++){
        node* temp=new node(arr[i],nullptr,mover);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

node* delete_duplicate(node* head){
    node* temp=head;
    while(temp->next!=NULL && temp!=NULL)
    {
     node* nextnode=temp->next;
     while(nextnode!=NULL && nextnode->data==temp->data){
        node* duplicate=nextnode;
        nextnode=nextnode->next;
        free(duplicate);
     }   
     temp->next=nextnode;
     if(nextnode!=NULL) nextnode->back=temp;
     temp=nextnode;
    }
    return head;
}

int main(){

}