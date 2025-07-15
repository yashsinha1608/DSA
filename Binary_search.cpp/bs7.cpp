#include<iostream>
using namespace std;
 int search(int* arr,int n){
    int low=0,high =n-1;
    int ans=INT16_MIN;
    int index=-1;
    while(low<=high){
        int mid=(low+high)/2;
        // if search spac is already sorted 
        if(arr[low]<arr[high]){
          if(arr[low]<ans){
            index=low;
            ans=arr[low];
          }
            break;
        }

// left half is soretd 
        if(arr[low]<=mid){ 
           if(arr[low]<ans){
            index=low;
            ans=low;
           }
            low=mid+1;
        }
        //right sorted 
        else{
            if(arr[mid]<ans){
                index=mid;
                ans=arr[mid];
            }
            high=mid-1;
        }
    }
    return index;
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