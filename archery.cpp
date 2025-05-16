#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the number of shots taken(should be less than 100)";
  cin>>n;
  int shot[n];
  cout<<"enter the value of each shot made (value should be btw 0 to 10)";
  for(int i=0;i<n;i++){
    cin>>shot[i];
  }
  int goodshot=0;
  int badshot=0;
  for (int i=0;i<n;i++){
    if(shot[i]>=7){
      goodshot++;
    }
    else{
      badshot++;
    }
  }
  cout<<goodshot<<" "<<badshot;
 return 0;
}