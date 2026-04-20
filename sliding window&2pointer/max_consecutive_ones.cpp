#include <bits/stdc++.h>
using namespace std;

int stockspan(vector<int> arr,int k){
    int l=0;
    int r=0;
    int maxlen=0;
    int zero=0;

    while(r<arr.size()){
        if(arr[r]==0) zero++;
        if(zero>k){
            if(arr[l]==0) zero--;
            l++;
        }
        if(zero<=k){
            maxlen=max(maxlen,r-l+1);
        }
        r++;
    }
return maxlen;

}
int main(){

}