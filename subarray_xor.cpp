//we need to count the total number of subarray 
#include<iostream>
#include <map>
using namespace std;
int main(){
     int n,k,count;
    cin>>n;
    cin>>k;
    count=0;
  int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
//better solution 
/* for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int xr=0;
            xr=xr^arr[j];
        if(xr==k){
            count++;
        }
        }
}
cout<<count;
}*/
//optimal  TC-O(n) 
int xr=0;
map<int,int> mpp;
mpp[xr]++; //{0,1}
for(int i=0;i<n;i++){
    xr=xr^arr[i];
    //k
    int x=xr^k;
    count=count+mpp[x];
    mpp[xr]++;
}
cout<<count;
}