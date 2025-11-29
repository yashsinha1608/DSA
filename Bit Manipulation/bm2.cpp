#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

long function(int divident,int divisor ){
    if (divident==divisor) return 1;

bool sign=true;
if(divident>=0 && divisor <0) sign =false;
if(divident<0 && divisor >0 ) sign = false;

long n=abs(divident);
long d=abs(divisor);
long  ans=0;
while(n>=d){
     int count=0;
    while(n>= (d<<(count+1))){
        count++;
    }
    ans=ans+ 1<<count;
    n=n-(d<<count);
}

if(ans>= 1<<31 && sign==true)
return INT32_MAX;
if(ans>=1<<31 && sign==false)
return INT32_MIN;

if(sign==true)
return ans;
else{
    return (-1*ans);
}
}

int main(){

}