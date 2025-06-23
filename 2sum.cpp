#include<iostream>
#include<algorithm>
using namespace std;
int main(){
     int n,sum,target;
    cin>>n;
  int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }  
   /* for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){             // brute and better 
            if(arr[i]+arr[j]==sum){
                cout<<"YES";
                break;
            }
        }
    }*/

    // optimal 
int left=0;
int right=n-1;
sort(arr,arr+n);
while(left<right){
    int sum=arr[left]+arr[right];
    if(sum==target){
        return 1;
    }
    else if(sum<target) left++;
    else right--;
}
return 0;
}