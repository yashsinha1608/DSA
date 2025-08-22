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

void print(node* head){
    
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
cout<<endl;
}

node* insertion_last(node* head,int x){
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node* newcreated= new node(x);
    temp->next=newcreated;

    return head;
    
}

node* insertion(node* head,int ele,int k)
{
node* temp=head;
    int count=0;
    while(temp->next!=NULL){
        count++;
        if(count==k-1){
            node* x=new node(ele,temp->next);
           
            temp->next=x;

            break;
        }
        else{
            temp=temp->next;
        }
    }
    return head;
}



 int main(){
  vector<int> arr={12,5,7,6,4};
  node* head= creation(arr);
  head=insertion_start(head,9);
}