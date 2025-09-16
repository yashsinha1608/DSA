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

node* segmentation (node* head){
    node* zerohead=new node(-1);
    node* onehead=new node(-1);
    node* twohead=new node(-1);

    node* zero =zerohead;
      node* one =onehead;
        node* two =twohead;
        node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            zero->next=temp;
            zero = temp;
        }
        else if(temp->data==1){
            one->next=temp;
            one=temp;
        }
        else{
            two->next=temp;
            two=temp;
        }
    }
    
}
