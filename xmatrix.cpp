#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int inc=1;
  int dec=n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(j>0){
            cout<<" ";
        }
      if(i==j && i+j==n-1){
        cout<<inc;
        inc++;
        dec--;
      }
      else if(i==j){
        cout<<inc;
        inc++;
      }
      else if(i+j==n-1){
        cout<<dec;
        dec--;
      }
      else{
        cout<<"-";
      }
    }
    cout<<endl;
  }
  return 0;
}