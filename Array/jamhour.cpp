#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number of hours";
cin>>n;
int carno[n];
cout<<"number of cars in each hour";
for (int i=0;i<n;i++){
    cin>>carno[i];
}
int busy_hour=0;
for (int i=1;i<n;i++){
    if(carno[i]>=50&&carno[i]>carno[i-1]){
        busy_hour++;
    }
    }
    cout<<busy_hour;
}