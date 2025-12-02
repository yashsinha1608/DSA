//n will be given...1 to n...we need to find the missing and reapeating numbe 
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n]; 

    //better solution 
    //int hash[n+1]={0};

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

   /* for(int i = 0; i < n; i++){
      hash[arr[i]]++;
    }
    int repeat=-1,miss=-1;
  for(int i = 0; i < n; i++){
if(hash[i]>1){
    repeat=i;
}
else if(hash[i]==0)
{
    miss=i;
}
if(miss!=-1&& repeat!=-1){
    break;
}

}*/
//optimal solution (2 menthods but XOR is tough so I skipped)
int x,y;
long long s1,s1n;
long long  s2,s2n;
s1n=n*(n+1)/2;
s2n=n*(n=1)*((2*n)+1)/6;
s2=0,s1=0;
for(int i=0;i<n;i++){
s1=s1+arr[i];
s2=arr[i]*arr[i];
}
int val1= s1-s1n;//x-y
int val2= s2-s2n;//x^2-y^2
val2=val2/val1;//x+y
x=(val1+val2)/2;
y=x-val1;
cout<<x<<" "<<y; 
}
