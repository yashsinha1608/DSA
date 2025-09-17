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


node* add_2_LL(node* l1,node* l2){
    node* t1=l1;
    node* t2=l2;
    node* newnode= new node(-1);
    node* temp=newnode;
int carry =0;
int sum=0;
    while(t1!=NULL || t2!=NULL){
        sum=carry;
        if(t1) sum=sum+t1->data;
        if(t2) sum=sum+t2->data;
        node* sumnode=new node(sum%10);
        carry=sum/10;
        temp->next=sumnode;
        temp=sumnode;

        if(t1) t1=t1->next;
        if(t2) t2=t2->next;
    }
    if(carry){
        node* carrynode=new node(carry);
        temp->next=carrynode;
}
return newnode->next;

}