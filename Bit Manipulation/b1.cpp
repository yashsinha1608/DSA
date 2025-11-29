#include<iostream>
#include<algorithm>
using namespace std;

string convert_2_binary(int n){
    string res="";
    while(n>0){
        if(n%2==1){
            res+="1";
        }
        else res+="0";
        n=n/2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int convert_2_decimal(string x){
    int len= x.length();
    int num=0;
    int p2=1;
    for(int i=len-1;i>=0;i++){
        if(x[i]=='1'){
            num=num+p2;
        }
        p2=p2*2;
    }
    return num;
}

int count_set_bit(int x){
    int count=0;
    while(x>0){
    count+= x&1;
    x=x>>1;
    }
    return count;
}

int count_set_bit_fast(int n){
    int count =0;
    while(n>0){
        n=n&(n-1);
        count++;
    }
    return count;
}


int main(){

}