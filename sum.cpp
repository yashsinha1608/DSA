#include <iostream>
using namespace std;
int summ=1;
int sum(int n){
     summ=summ*n;
    n--;
    if(n==0){
       return summ;
    }
    sum(n);
    
}
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    int f=sum(n);
    cout<<f;

}