#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int min =i;
        for(int j=i;j<n;j++){
        if(arr[j]<arr[min]){
            min=j;
        }
        }
       int temp=arr[min];
       arr[min]=arr[i];
       arr[i]=temp; 
    }
}
void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
            }  
        }
    }
}
void insertion_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0&&arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //selection_sort(arr,n);
    //bubble_sort(arr,n);
    //insertion_sort(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}