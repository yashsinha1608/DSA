#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    int r=0;
    while(n>0){
        int ld=n%10;
        n=n/10;
        r=(r*10)+ld;
        }
        cout<<r;
    }


