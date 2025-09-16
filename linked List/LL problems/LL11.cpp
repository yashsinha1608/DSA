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

node* find_intersection(node* headA,node* headB){
    if(headA==NULL || headB==NULL) return NULL;  
    node* tempA=headA;
    node* tempB=headB;
    while(tempA!=tempB){
        tempA=tempA->next;
        tempB=tempB->next;
        if(tempA==tempB){
            return tempA;
        }
        if(tempA==NULL) tempA=headB;
        if(tempB==NULL) tempB=headA;
    }
    return tempA;
}