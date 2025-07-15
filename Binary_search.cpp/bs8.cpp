#include<iostream>
using namespace std;

int single(int* arr,int n){
    int low=1;
    int high=n-2;
    if(n==1)return arr[0];
    if(arr[0]!=arr[1]) return arr[0];
    if(arr[n-1]!=arr[n-2]) return arr[n-1];

    while(low<=high){
       int mid=(low+high)/2;

       if(arr[mid]!=arr[mid-1]&&arr[mid]!=arr[mid+1]){
        return mid;
       }
       if((mid%2==1 && arr[mid]==arr[mid-1]) || (mid %2 ==0  && arr[mid]==arr[mid+1])){
        low=mid+1;//eliminated left 
       }
       else{
        high=mid-1;//eliminated right 
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
}