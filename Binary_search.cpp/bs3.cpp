//Find the first and last occurance of a number....need to return as"{first,last}"


#include<iostream>
using namespace std;


int upperbound(int* arr,int n,int x){
    int ans=n;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>x){
        ans=mid;
        }

        else{
             low=mid+1;
        }
    }
    return ans;
}

int lowerbound(int* arr,int n,int x){
    int ans=n;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
        ans=mid;
        }

        else{
             low=mid+1;
        }
    }
return ans;
}

int main(){
    int n,k;
    cin >> n;
    cin>>k;
    int arr[n]; 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int lb=lowerbound(arr,n,k);
    if(lb==n || arr[lb]!=k){
        return -1;
    }
    else{
        return(lb,upperbound(arr,n,k)-1);
    }
}