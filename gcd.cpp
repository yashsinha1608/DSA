#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int n1,n2;
    int gcd;
    cout<<"enter the  numbers";
    cin>>n1>>n2;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
     cout<<gcd<<" is a factor";
}