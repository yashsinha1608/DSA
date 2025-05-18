#include<iostream>
using namespace std;
int main(){
  int r,c;
  cin>>r>>c;
  int stock[r][c];
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin>>stock[i][j];
    }
  }
  int overstocked=0;
  for(int i=0;i<r;i++){
    int highstockcount=0;
    for(int j=0;j<c;j++){
      if(stock[i][j]>=100){
        highstockcount++;
      }
      }
    if(highstockcount>=3){
      overstocked++;
    }
  }
cout<<overstocked;
  return 0;
}