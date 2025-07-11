#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n]; 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
int prefix=1,suffix=1;
int ans=INT16_MIN;
for(int i=0;i<n;i++){
    if(prefix==0) prefix=1;
    if(suffix==0) suffix=1;
    prefix=prefix*arr[i];
    suffix=suffix*arr[n-1-i];
    ans=max(ans,max(prefix,suffix));
}
cout<<ans;

}