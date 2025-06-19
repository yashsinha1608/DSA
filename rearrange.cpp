#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int positive=0;
 int negative=1;
 int ans[n];
  int arr[n];
  for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    for(int  i=0;i<n;i++){
        if(arr[i]<0){
            ans[negative]=arr[i];
            negative = negative +2;
        }
        else{
            ans[positive]=arr[i];
            positive= positive+2;
        }
    }
return 0;
}