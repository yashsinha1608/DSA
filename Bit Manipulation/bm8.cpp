#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

vector<int> prime(int n){
   vector<int> ans;
    for(int i=0;i<=sqrt(n);i++){
        if(n%2==0){
ans.push_back(i);
while(n%i==0){
    n=n/i;
}
        }

    }
    if(n!=1){
        ans.push_back(n);
    }
    return ans;
}

int main(){
    
}