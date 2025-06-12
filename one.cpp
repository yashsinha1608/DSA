#include<iostream>
using namespace std;
int main(){
  int n;
    cin>>n;
  int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
 int max =0;
 int counter=0;
 for (int i=0;i<n;i++){
    if(arr[i]==1){
        counter++;
        if(counter>max){
            max=counter;
        } 
    }
     else{
            counter =0;
        }
 }
 cout<<max;
}