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

/*int find_lenght(node* head){
node* temp=head;
    int count=0;
    while(temp!=NULL){
    temp=temp->next;
    count++;
    }
    return count;
}*/

node* hair_tortoise(node* head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}



int main(){
    vector<int> arr={1,2,3,21,53,2,4,1};
    node* head=convert(arr);


}