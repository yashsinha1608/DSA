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
    int ans=n;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=target){
        ans=mid;
        }

        else{
             low=mid+1;
        }
    }
cout<<ans;

return 0;

}