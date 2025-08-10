#include<iostream>
using namespace std;
string removeparanthasis(string s){
    int counter =0;
    string ans="";
    for (int i=0;i<s.length();i++){
        if(s[i]==')') counter --;
        if (counter!=0) ans.push_back(s[i]);
        if(s[i]=='(') counter ++;
    }
    return ans;
}

int main()
{
     string s;
    cout << "Enter a string with parentheses: ";
    getline(cin, s); 

    string result = removeparanthasis(s);
    cout << "String after removing parentheses: " << result << endl;

}