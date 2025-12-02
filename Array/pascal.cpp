#include<iostream>
using namespace std;
// this is to find any individual element
int ncr(int n,int r){
    int ans;
     ans=1;
    for(int i=0;i<r;i++){
        ans=ans*(n-i);
        ans=ans/i+1;
     }
     return ans;
}
int main(){
     int n,r;
     int ans;
     cout<<ncr(n-1,r-1);


     //to print all elements in a row of a pascal triagle (not optimal) 
     for(int i=0;i<=n;i++){
        cout<< ncr(n-1,r-1);
     }
// to print the pascal triangle
     while (n>0){
        for(int i=0;i<=n;i++){
        cout<< ncr(n-1,r-1);
     }
     cout<<endl;
     }
}