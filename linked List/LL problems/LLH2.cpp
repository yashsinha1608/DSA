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

node* findnthnode(node* head,int k){
int cnt=1;
while(head!=NULL){
    if(cnt==k) return head;
    cnt++;
head=head->next;
}
return head;
}
node* rotate(node* head,int k){
    if(head==NULL || head->next==NULL) return head;
    node* tail=head;
   int count=1;
    while(tail->next!=NULL){
        tail=tail->next;
        count++;
    }
    if(k % count==0) return head;
    k=k % count; 

    tail->next=head;

    node* newlastnode= findnthnode(head,count-k);
head=newlastnode->next;
newlastnode->next=NULL;
return head;
}

int main(){

}