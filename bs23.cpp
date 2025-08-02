#include<iostream>
using namespace std;

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

int rowmaxone(int* arr,int n,int m){
    int countmax1=0;
    int index=-1;
    for(int i=0;i<n;i++){
        int countone=m-lower_bound(arr[i],m,1);
        if(countone>countmax1){
            countmax1=countone;
            index=i;   
        }
    }
    return index;
}