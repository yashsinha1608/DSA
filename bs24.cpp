#include<iostream>
using namespace std;

int find_element(int* arr,int n,int m,int target){
    int low=0,high=(m * n)-1;
    while(low<=high){
        int mid=(low+high)/2;
        int row= mid/m;
        int col=mid%m;
        if(arr[row * m + col] ==target)return 1;
   
   else if(arr[row * m + col] <target)
low=mid+1;
else high=mid+1;
 }
 return -1;
}