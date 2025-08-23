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

node* delete_kth_element(node* head,int k){
    node*temp=head;
    int count=0;
    while(temp->next!=0){
        count++;
        if(count==k) break;
        temp=temp->next;
    }

    node* prev=temp->back;
    node* ahead=temp->next;
    prev->next=ahead;
    ahead->back=prev;

    temp->next=nullptr;
    temp->back=nullptr;

    free(temp);
    return head;
}


int main(){

}