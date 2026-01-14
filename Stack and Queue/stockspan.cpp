#include <bits/stdc++.h>
using namespace std;
//brute
vector<int> stockspan(vector<int> arr,int n){
    vector<int> ans(n);
    for (int i=0;i<n;i++){
        int span=0;
        for(int j=i;j>=0;j--){
            if(arr[j]<=arr[j-1])//doubt
            {
                span++;
            }
            else break;
        }
        ans[i]=span;
    }
    return ans;
}



int main(){

}