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
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<n;k++){
                sum=sum+arr[k];{
                    if(sum==k){
                        lenght=max(lenght,j-i+1);
                    }
                }
            }
        }
    }
    cout<<lenght;
}