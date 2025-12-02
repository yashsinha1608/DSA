#include<iostream>
using namespace std;
int main(){
    int n,cost;
    cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mini=arr[0];
    int profit =0;
for(int i=1;i<n;i++){
     cost=arr[i]-mini;
    profit=max(profit,cost);
    mini=min(mini,arr[i]);  
}

 }
