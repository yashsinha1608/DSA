#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
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
// this fucion is for creation of LL when array is given 
node* convert(vector<int> &arr){
    node* head=new node(arr[0]);
    node* mover=head;
    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i]);
        mover->next=temp; 
        mover = temp;
    }
    return head;
}
int lenghth(node* head){
    int cnt=0;
    node* temp=head;
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
    cnt++;
  }
  return cnt;

}

int present(node* head,int val){
    node* temp=head;
  while(temp){
    if(temp->data==val){
        return 1;
    }
    temp=temp->next;
  }
  return 0;
}
int main(){
  vector<int> arr={12,5,7,6,4};
  node* head= convert(arr);
  node* temp=head;
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<lenghth(head);
  cout<<present(head,5);
}