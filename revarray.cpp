#include <iostream>
using namespace std;
void rev(int i,int arr[],int n){
    if (i>=n/2){
    return;
    }
    swap(arr[i],arr[n-1-i]);
    rev(i+1,arr,n);
}
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rev(0,arr,n);
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
}