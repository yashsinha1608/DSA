#include<iostream>
#include<algorithm>
using namespace std;

int place(int* arr,int n,int distance,int k){
    int coutcows=1,last=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-last>=distance){
            coutcows++;
            last=arr[i];
        }
        if(coutcows>=k) return 1;

    }
    return -1;
}

int aggresivecows(int* arr,int n,int cows){
sort(arr,arr+n);
int low=1, high=arr[n-1]-arr[0];
while(low<=high){
    int mid=(low+mid)/2;
    if(place(arr,n,mid,cows)==1){
        low=mid+1;
    }
    else high=mid-1;

}
return high;
}


int main(){
    int n,k;
    cin >> n;

    cin>>k;
    int arr[n]; 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    aggresivecows(arr,n,k);
}