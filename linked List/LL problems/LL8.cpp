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

node* delete_nth(node* head,int n){
    node* fast=head;
    node* slow=head;
    for (int i=0;i<n;i++){
        fast=fast->next;
    }
if(fast==NULL) return head->next;

while(fast->next!=NULL){
    fast=fast->next;
    slow=slow->next;
}

node* deletenode=slow->next;
slow->next=slow->next->next;
free(deletenode);
return head;
}




int main()
{
    
}