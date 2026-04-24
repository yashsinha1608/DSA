#include <bits/stdc++.h>
using namespace std;

int findPlatform(vector<int>& arr, vector<int>& dep) {
int i=0;
int j=0;
int maxi=0;
int count=0;
  sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());
    while (i<arr.size())
    {
        if(arr[i]<=dep[j]){
            count++;
            i++;
        }
        else{
            count--;
            j++;
        }
        maxi=max(maxi,count);
    }
    return count;
    
}
int main(){

}