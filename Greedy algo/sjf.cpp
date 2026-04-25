#include <bits/stdc++.h>
using namespace std;

double sjf(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int time=0;
        int tw=0;
        for(int i=0;i<arr.size();i++){
            
            tw+=time;
            time+=arr[i];
        }
        return tw/arr.size();
}
int main(){
    
}