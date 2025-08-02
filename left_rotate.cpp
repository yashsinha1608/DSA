#include<iostream>
#include<algorithm>
using namespace std;
/*int main(){
    int n;
    cin>>n;
  int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    int temp=arr[0];
     for(int i=1;i<n;i++){
     arr[i-1]=arr[i];
        }
        arr[n-1]=temp;
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
}*/
    //left rotate by d number of places 
    int main(){
        int d;
        cout<<"enter the number you want to rotate the array";
        cin>>d;
        int temp[d];
        int n;
    cin>>n;
    d=d%n;
  int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    /*for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++){
        arr[n-d+i] = temp[i];
}*/ 
    //for(int i=0;i<n;i++){
      //  cout<<arr[i]<<" ";

      
    //optimal code 
 reverse(arr,arr+d);
 reverse(arr+d,arr+n);
  reverse(arr,arr+n);
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
 } 
}
