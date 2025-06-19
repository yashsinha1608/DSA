 //1.Find break index
 //2.find number just greater than the break index 
 //3.sort the baki ka remaining array / reverse

 #include<iostream>
 #include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
int index=-1;
for(int i=n-2;i>=0;i--){            //first step is complete 
    if(arr[i]<arr[i+1]){
        index=i;
        break;
    }
}
if(index==-1){
    reverse(arr,arr+n);
}
    for (int i=n-1;i>=index;i--){
        if(arr[i]>arr[index]){
            swap(arr[i],arr[index]);
        }
    }
    reverse(arr+index,arr+n);

}
 