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

node* delete_key(node* head,int k){
     node* temp = head;
     while(temp!= NULL){
        if(temp->data==k){
        if(temp==head) {
            head=head->next;
        }
        node* prev=temp->back;
        node* nextnode=temp->next;

        if(prev!=NULL){
            nextnode->back=prev;
        }
        if(nextnode!=NULL){
            prev->next=nextnode;
        }
        free(temp);
        temp=nextnode;  
        }
        else{
            temp=temp->next;
        }
     }
     return head;
}

int main()
{
    
}