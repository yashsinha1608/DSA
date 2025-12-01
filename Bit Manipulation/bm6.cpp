#include<iostream>
#include<vector>
using namespace std;

int  xor_range(int n){
    if(n%4==1) return 1;
    else if(n%4==2) return n+1;
    else if(n%4==3) return 0;
    else return n;
}

int main(){
    
}