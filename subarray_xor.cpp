//we need to count the total number of subarray 
#include<iostream>
using namespace std;
int main(){
     int n,k,count;
    cin>>n;
    cin>>k;
  int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
//better solution 
 for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int xr=0;
            xr=xr^arr[j];
        if(xr==k){
            count++;
        }
        }
}
cout<<count;
}