#include<iostream>
using namespace std;

int main(){
    int n,target;
    cin >> n;
    cin>>target;
    int arr[n]; 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
int low=0,high=n-1;
int mid;
while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target) low=mid+1;
        else high=mid-1;
}
return -1;

}