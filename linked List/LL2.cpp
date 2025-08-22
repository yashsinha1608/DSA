#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
    node(int x){
        data=x;
        next=nullptr;
    }
};

node* creatiion_of_LL(vector<int>& arr){
    node* head=new node(arr[0]);
    node* mover=head;
    for(int i:arr){
node* temp=new node(arr[i]);
mover->next=temp;//mover jisko point kar raha hai uski value ko change kar rahe hai 
mover=temp;
    }
    return head;
}

//DELETE THE FIRST ELEMENT OF A LINKED LIST 
node* delete_first_element(node* head){
    if(head==NULL) return head;
    node* temp=head;
    head=head->next;
    free(temp);
   // OR delete temp;

    return head;
}

// to traverse and print all the elements of the LL
void print(node* head){
    
    while(head!=head){
cout<<head->data<<" ";
head=head->next;
    }
    cout<<endl;
}

    int main(){
  vector<int> arr={12,5,7,6,4};
  node* head= creatiion_of_LL(arr);
}
