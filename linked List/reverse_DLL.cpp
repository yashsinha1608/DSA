#include<vector>
#include<iostream>
using namespace std;

class node{
public:
int data;
node* next;
node* back;

    node(int x,node* next1,node* back1){
        data=x;
        next=next1;
        back=back1;
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

    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i],nullptr,mover);
        mover->next=temp;
        mover=temp;

    }
    return head;
}

node* reverse_DLL(node* head){
    node* mover=head;
    node* temp=nullptr;
    
while(mover!=NULL){
    temp=mover->back;
    mover->back=mover->next;
    mover->next=temp;

    mover=mover->back;
}
 return temp->back;   
}


int main(){
    
vector<int> arr={12,25,123,7};

}