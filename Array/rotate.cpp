#include<iostream>
using namespace std;
//brute solution 
int main(){
    int n;
    cin>>n;
    int row[n];
    int col[n];
  int arr[n][n];
  int ans[n][n];
  for(int i=0;i<n;i++){
    for (int j=0;j<n;j++){
         cin>>arr[i][j];
    }
    } 
for(int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        ans[ j][n-1-i]=arr[i][j];
    }
    } 
 // better/optimal is to do transepose and then reverse (2 steps)


}