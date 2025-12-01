#include<iostream>
#include<vector>
using namespace std;

vector<int> single_number(vector<int>& arr){
    long x=0;
    int b1=0;
    int b2=0;
    for(int i=0;i<arr.size();i++){
        x=x ^ arr[i];
}
    x= (x&(x-1)) ^ x;

    for(int i=0;i<arr.size();i++){
        if(arr[i] & x){
            b1=b1^arr[i];
        }
        else{
            b2=b2^arr[i];
        }
    }
    return {b1,b2};
}

int main(){

}