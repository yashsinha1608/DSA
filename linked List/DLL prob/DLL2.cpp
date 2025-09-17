//given a LL which is sorted now need to return all the pair which is equal to sum 
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
    node* mover=head;
    for (int i=1;i<arr.size();i++){
        node* temp=new node(arr[i],nullptr,mover);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
node* findtail(node* head){
    node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    return tail;
}

vector<pair<int,int>> find_pair(node* head,int k){
    vector<pair<int,int>> ans;
    if(head==NULL) return ans;
node* left=head;
node* right=findtail(head);
while(left->data<right->data){
    if(left->data+right->data==k){
        ans.push_back({left->data,right->data});
    }
    else if(left->data+right->data<k){
        left=left->next;
    }
    else{
        right=right->back;
    }
}
return ans;
}

int main(){

}