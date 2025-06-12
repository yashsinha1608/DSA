// Finding a number not present between 1 to N
#include<iostream>
using namespace std;
int main(){
  int n;
    cin>>n;
  int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
 /*   int i;
for(i=1;i<=n;i++){
    int flag=0;
    for(int j=0;j<n;j++){
        if(arr[j]==i);
        flag=1;
        break;
    }
    if(flag ==0){
        return i;
    }
*/
int hash[n+1]={0};
for(int i=0;i<n;i++){
    hash[arr[i]] +=1;
}
for(int i=1;i<=n;i++){
    if(hash[i]==0){
        return i;
    }
}
}

