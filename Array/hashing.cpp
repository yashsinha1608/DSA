#include<iostream>
using namespace std;
int main(){
    cout<<("enter the size of the array");
    int n;
    cin>>n;
    int arr[n];
    cout<<("enter the numbers in array");
    for(int i=0;i<n;i++){
        cin>>arr[i];  // array is created and initialized 
    }
    
    int hash[13]={0};      //Hash array is been created 
    for(int i=0;i<n;i++)   //we are iterating the array and then storing the value in hash 
    {
        hash[arr[i]]+= 1;   //store value in the hash array 
    }                   
    int q;
    cout<<("enter the number of query you want");
    cin>>q;
    while(q--){
        int number;
        cout<<"enter the number";
        cin>>number;
        cout<<hash[number]<<endl;
    }
}