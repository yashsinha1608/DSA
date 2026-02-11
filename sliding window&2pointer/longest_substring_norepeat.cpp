#include <bits/stdc++.h>
using namespace std;

 int longestNonRepeatingSubstring(string& s) {
        int n=s.size();

        int hash[256]={-1};
        int l=0;
        int r=0;
        int maxlen=0;
        while(r<n){
            if(hash[s[r]]!=-1){
                 l = max(hash[s[r]] + 1, l);
            }
             int len = r - l + 1;
             maxlen=max(len,maxlen);
             hash[s[r]]=r;
             r++;
        }
        return maxlen;
 }

 int main(){

 }