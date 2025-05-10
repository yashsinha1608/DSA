#include <iostream>
using namespace std;
int main(){
int n;
int count = 1;
cout<<"Enter the number";
cin>>n;
while(n>=10){
    n=n/10;
   count++;
}
cout<<"the number of digits are "<<count;
}