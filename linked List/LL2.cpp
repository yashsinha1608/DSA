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
    for(int i=1;i<arr.size();i++){
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


node* delete_last_element(node* head){
if(head==NULL||head->next==NULL) return nullptr;
node* temp=head;
while(temp->next->next!=NULL){
    temp=temp->next;
}
free(temp->next);
temp->next=nullptr;

return head;
}

node* delete_kth_element(node* head,int k){
    if(head==NULL) return head;

    if(k==1){
        node* temp1=head;
        head=head->next;
        free(temp1);
        return head;
    }
node* temp=head;
for(int i=1;temp!=NULL && i<k-1;i++){
temp=temp->next;
}


//if(temp==NULL || temp->next==NULL) return head;


node* del=temp->next;
temp->next=temp->next->next;
free(del);  
return head;
}

//OR
node* delete_kth_node(node* head,int k){
      if(head==NULL) return head;

    if(k==1){
        node* temp1=head;
        head=head->next;
        free(temp1);
        return head;
    }
    node* temp=head;
    node* prev=NULL;
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==k){
            prev->next=temp->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
        
    }
    return head;
}


    int main(){
  vector<int> arr={12,5,7,6,4};
  node* head= creatiion_of_LL(arr);
}
