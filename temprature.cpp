#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temps[n];
    for (int i = 0; i < n; ++i) {
        cin >> temps[i]; 
    }
    int streak=1;int longest=1;
        for (int i = 1; i < n; ++i) {
            if(temps[i]>temps[i-1]){
                streak++;
                if(streak>longest){
                    longest = streak;
                }
            }
            else{
                streak =1;
            }
        }
        cout<<longest;
}