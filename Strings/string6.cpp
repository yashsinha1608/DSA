#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;

bool isanagram(string s1,string s2){
    sort(begin(s1),end(s1));
    sort(begin(s2),end(s2));
    
    if(s1==s2){
        return true;

    }
    else{
        return false;
    }
}

int main(){
string s1,s2;
cin>>s1>>s2;
if(isanagram(s1,s2)){
    cout<<"true";
}
else{
    cout<<"false";
}
}