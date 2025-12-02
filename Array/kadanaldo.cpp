#include<iostream>
using namespace std;
int main(){
    int n,sum,start,ansstart,ansend;
    cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    int max=INT16_MIN;
    for(int i=0;i<n;i++){
        if(sum==0){
            start=i;
        }
        sum=sum+arr[i];
        if(sum>max){
            max=sum;
            ansstart=start,ansend=i;
        }

        if(sum<0){
            sum=0;
        }
    }
    if(max<0){
        max=0;
    }
    cout<<max;
}