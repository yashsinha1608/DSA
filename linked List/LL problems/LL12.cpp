//Finding middle of linked list  // Tortoise hare
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


node* add1(node* head){
    reverse_LL(head);
    node* temp=head;
    int carry=1;
    while(temp!=NULL){
        temp->data=temp->data+carry;
        if(temp->data<0){
            carry=0;
            break;
        }
        else{
            temp->data=0;
            carry=1;
        }
        temp=temp->next;
    }
    if(carry==1){
        node* newwnode=new node(1);
         reverse_LL(head);
        newwnode->next=head;
       return newwnode;
    }
    else{
        reverse_LL(head);
    }
    return head;
}



//recursive method 
int helper(node* head){
node* temp=head;
if(temp==NULL)
 return 1;
int carry=helper(temp->next);
temp->data=temp->data+carry;
if(temp->data<10){ return 0;
temp->data=0;
return 1;
}
}

node* add1_recursive(node* head){
    int carry=helper(head);
    if(carry==1){
        node* newnode=new node(1);
        newnode->next=head;
        return head;
    }
    return head;
}