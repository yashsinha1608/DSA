#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
     int n;
     vector<vector<int>> ans;
    cin>>n;
  int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);\

    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]){
            continue;
        }
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum =arr[i]+arr [j]+ arr[j];
             if(sum<0){
            j++;
             }
             else if(sum>0){
                k--; 

             }
             else{
                vector<int> temp={arr[i],arr[j],arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && arr[j]==arr[j-1]){
                    j++;
                }
                 while(j<k && arr[k]==arr[k+1]){
                    k++;
                }
             }
        }



    }
    
}