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
    node* prev=head;
    for(int i=0;i<arr.size();i++){
        node* temp=new node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;

}
node* delete_first_element(node* head){
     node*temp=head;
     head=head->next;
     head->back =nullptr;
    temp->next=nullptr;

    return head;
    }

    node* delete_tail(node* head){
        node* tail= head;
        while(tail->next!=NULL){
            tail=tail->next;
        }
       node* prev=tail->back;
       prev->next=nullptr; 
       tail->back=nullptr;
       
       free(tail);
        return head;
    }

int main(){

}