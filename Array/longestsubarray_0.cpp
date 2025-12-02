// we need to find the longest subaaray with sum as zero
#include<iostream>
using namespace std;
int main(){
     int n;
    cin>>n;
  int arr[n];
  int k,lenght;
  lenght=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    for (int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
                sum=sum+arr[j];{
                    if(sum==0){
                        lenght=max(lenght,j-i+1);
                    }
            }
        }
    }
    cout<<lenght;
}