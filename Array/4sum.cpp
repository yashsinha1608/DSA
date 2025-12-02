//will use i,j,k,l where i and j are constant poniter/ variable 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
     int n;
     vector<vector<int>> ans;
    cin>>n;
    int target=0;
  int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    sort(arr,arr+n);
   for(int i=0;i<n;i++){
    if(i>0 && arr[i]==arr[i-1]) continue;
   for(int j=0;j<n;j++){
    if(j!=i+1 && arr[j]==arr[j-1])continue; //   j!=i+1  ????
        int k= j+1;
        int l=n-1;
        while(k<l){
           int  sum= arr[i]+arr[j]+arr[k]+arr[l];
            if(sum ==target){
                vector<int> temp={ arr[i],arr[j],arr[k],arr[l]};
                ans.push_back(temp);
                k++;l--;
                while(k<l && arr[k]==arr[k-1]) k++;
                while(k<l && arr[l]==arr[l+1]) l--;

            }
            else if(sum <target) k++;
            else l--;

        }

   }


}
}