#include<iostream>
using namespace std;

class node{
    int data;
    node* next;
public:
    node(int data1,node* next1){
        data=data1;
        next=next1;
    }
    public:
    node(int data1){
        data=data1;
        next = nullptr;
    }

};

int main(){
    node* y=new node(2);
    cout<<y;
}