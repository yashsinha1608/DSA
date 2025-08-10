#include<iostream>
using namespace std;

string largest_odd_number(string s){
for(int i=s.size()-1;i>=0;i--){
    if((s[i]-'0')%2!=0){
        return s.substr(0,i+1);
    }
}
return "";
}
int main(){
    string s;
    cout << "Enter a string with numbers: ";
    getline(cin, s); 
    string result=largest_odd_number(s);
}