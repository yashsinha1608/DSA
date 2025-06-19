#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int max=INT16_MIN;
    vector<int> ans;
    cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
for(int i=n-1;i>=0;i--){
    if(arr[i]>max){
ans.push_back(arr[i]);
max=arr[i];
    }
}

}