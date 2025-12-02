#include<iostream>
using namespace std;
// better solution 
/*int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int row[n];
    int col[m];
  int arr[n][m];
  for(int i=0;i<n;i++){
    for (int j=0;j<m;j++){
         cin>>arr[i][j];
    }
    } 
    for(int i=0;i<n;i++){
    for (int j=0;j<m;j++){
        if(arr[i][j]==0){
            row[i]=1;
            col[j]=1;
        }
    }
    }
    for(int i=0;i<n;i++){
    for (int j=0;j<m;j++){
        if(row[i] || row[j]==1){
            arr[i][j]=0;
        }

    }
    } 

}*/

// optimal solution
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int arr[n][m];
  for(int i=0;i<n;i++){
    for (int j=0;j<m;j++){
         cin>>arr[i][j];
    }
    } 

}
