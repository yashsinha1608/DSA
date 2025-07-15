#include<iostream>
using namespace std;

int search(int* arr,int n,int k){
int low=0;
int high=n-1;
while(low<=high){
int mid=(high+low)/2;
if(arr[mid]==k) return mid;
 
//extra codes 
if(arr[low]==arr[mid] && arr[mid]==arr[high]){
    low=low+1;
    high=high-1;
    continue;
}



if(arr[low]<=arr[mid]){//left sorted

if(arr[low]<=k && k<=arr[mid]){//target is btw low and mid ie target is on the left hand side
    high=mid-1;// we eleminated the RHS   
}
else{
    low=mid+1;// elemenitaed the LHS
}
}
else{// right sorted 
if(arr[mid]<=k&&k<=high){//target is in RHS
    low=mid+1;//eliminated LHS
}
else{
    high=mid-1;//eleiminated rhs
}

}
}
return -1;
}



int main(){
    int n,k;
    cin >> n;
    cin>>k;
    int arr[n]; 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans=search(arr,n,k);
}