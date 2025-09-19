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

node* convert(vector<int> &arr){
node* head=new node(arr[0]);
node* mover=head;
for(int i=1;i<arr.size();i++){
node* temp=new node(arr[i]);
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

node* get_kthnode(node* head,int k){
    while(head!=NULL && k>1 ){
        k--;
        head=head->next;
    }
    return head;
}

node* reverse_kth(node* head,int k){
    node* temp=head;
    node* prev=NULL;
    while(temp!=NULL){
        node* kth_node=get_kthnode(temp,k);
        if(kth_node==NULL){
            if(prev) prev->next=temp;
            break;
        }
        node* nextnode=kth_node->next;
        kth_node->next=NULL;
        reverse_LL(temp);
        if(temp==head){
            head=kth_node;
        }
        else{
            prev->next=kth_node;
        }
        prev=temp;
        temp=nextnode;
    }
    return head;
}


int main(){

}