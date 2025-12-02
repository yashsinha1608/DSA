#include <iostream>
using namespace std;
int main(){
    int n;
    int numd;
    cout<<"Enter a number";
    cin>>n;
    numd=n;
    int r=0;
    while(numd>0){
        int ld=numd%10;
        numd=numd/10;
        r=(r*10)+ld;
        }
    if(r==n){
        cout<<"the number is a palandrome";
    }
    else{
    cout<<"not a palandrome";
    }
}