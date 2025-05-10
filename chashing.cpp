#include<iostream>
using namespace std;
int main(){
     string s;
     cout<<"enter the string"<<endl;
    cin>>s;                          // we made a sring and initialized it 
     int hash[256]={0};
     for(int i=0;i<s.size();i++){   //we iterated thright the string 
        hash[s[i]]++;           //inserted the data in the hash array
     }
cout<<"enter the character you want to know about";
char c;
cin>>c;
cout<<hash[c];
}