#include<iostream>
using namespace std;

int searchelement(int* arr,int n,int m,int target){
int row=0;
int col=m-1;
while(row<n&&col>=0){
    if(arr[row * m + col] ==target) return 1;
    else if(arr[row * m + col] <target) row++;
    else col--;
}
return -1;
}