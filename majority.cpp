#include<iostream>
using namespace std;
int main(){
    int n,count,el;
    cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
       for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            el=arr[i];
        }
        else if(arr[i]==el){
            count++; 
        }
        else{
            count--;
        }
       }
       int counter1=0;
       for(int i=0;i<n;i++){
        if(arr[i]==el){
            counter1++;
        }
        if(counter1>n/2){
            return el;
        }
    return -1;
       }
}