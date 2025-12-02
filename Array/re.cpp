#include <iostream>
using namespace std;
//int count=0;
void print(int n){
    
    if(n<1) return;
    cout<<" "<<n;
    n--;
    print(n);
}
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    print(n);
}