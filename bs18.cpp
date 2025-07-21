#include<iostream>
#include <algorithm>
#include <numeric> 
using namespace std;

int funtion(int* arr,int n,int pages){
int student=1,pagestudent=0;
for(int i=0;i<n-1;i++){
    if(pagestudent+arr[i]<=pages){
        pagestudent=pagestudent+arr[i];
    }
    else{
        student++;
        pagestudent=arr[i];
    }
} 
return student;
}

int findpage(int* arr,int n,int k){
    if(k>n) return -1;
   int low = *max_element(arr, arr + n);
   int high =accumulate(arr, arr + n, 0);
   while(low<=high){
    int mid=(low+high)/2;
    int student =funtion(arr,n,mid);
    if(student>k){
        low=mid+1;
    }
    else{
        high=mid-1;
    }

    }
    return low;
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