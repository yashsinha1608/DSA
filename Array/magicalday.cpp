#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of days";
    cin>>n;
    int score[n];
    cout<<"enter the score of each day";
    for(int i=0;i<n;i++){
        cin>>score[i];
    }
    int magical_day=0;
for(int i=1;i<n-1;i++){
    if(score[i]>score[i-1]&& score[i]>score[i+1]){
        magical_day++;
    }
}
cout<<magical_day;
}