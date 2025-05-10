#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the numbers of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hash[100000]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int maxf,max;
    maxf=hash[0];
    max;
    for(int i=0;i<100000;i++){
        if(hash[i]>maxf){
            maxf=hash[i];
            max=i;
        }
        else if(hash[i]==maxf && i<max) // iski as such zaroorat nahi hai kyuki jab hash iterate hoga toh hamesha chote se hi hoga toh agar kabhi value same aa gyi frequency ki toh chota hi lega since sirf  greater bola hai 
        max=i; 
    }
    cout<<"max frequency element is "<<max<<" with frequency "<<maxf;
}