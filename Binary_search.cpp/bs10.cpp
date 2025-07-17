#include<iostream>
using namespace std;
int sq_root(int n){
    int low=1,high=n;
    while(low<=high){
        long long   mid=(low+high/2);
        if(mid*mid==n) return mid;
        else if(mid*mid<n){
            low=mid+1;
        } 
        else{
            high=mid-1;
        }
    }
    return  high; 
}


int main(){
    int n;
    cin>>n;
}