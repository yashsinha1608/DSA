#include<iostream>
#include<vector>
using namespace std;

int pow(int x,int n){
    int ans=1;
    int m=n;
    while(n>0){
        if(n%2==1){
            ans=ans*x;
            n--;
        }
        else{
            n=n/2;
            x=x*x;
        }
    }
    if(m<0){
        return 1/ans;
    }
    else{
    return ans;
    }
}

int main(){
    
}