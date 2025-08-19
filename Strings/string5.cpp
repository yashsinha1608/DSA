#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;


bool rotation(string s1,string s2){
    if(s1.size()!=s2.size()){
        return false;
    }
    string concat=s1+s1;
    int ind=concat.find(s2);
    if(ind==-1){
        return false;
    }
    return true;
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
if(rotation(s1,s2)){
    cout<<"YES";
}
else{
    cout<<"NO";
}
}