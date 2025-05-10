#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &arr,int low, int high){
int p=arr[low];
int i=low;
int j=high;
while(i<j){
    while(arr[i]<=p && i<high){
        i++;
    }
 while(arr[j]>p && i>low){
    j--;
    }
    if(i<j)
    swap(arr[i],arr[j]);
}
swap(arr[low],arr[j]);
    return j;

}
void qs(vector<int> &arr, int low, int high){
    if(low<high){
        int pindex=partition(arr,low,high);
        qs(arr,low,pindex-1);
        qs(arr,pindex+1,high);
    }
}
int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    qs(arr, 0, arr.size() - 1);
    
    for(int num : arr)
        cout << num << " ";
    return 0;
}