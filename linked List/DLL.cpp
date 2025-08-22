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
    node* prev=head;
    for(int i=0;i<arr.size();i++){
        node* temp=new node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

int main(){

}