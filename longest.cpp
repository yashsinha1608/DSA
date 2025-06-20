//put everthing in set ds(unordered)

#include<iostream>
#include <unordered_set>
using namespace std;
int main(){
    int n;
    int longest=1;
    cin>>n;
    unordered_set<int> st;
  int arr[n];
  for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(auto it : st){
        if(st.find(it-1)== st.end()){
            int count=1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                x++;
                count++;
            }
            longest=max(longest,count);
        }
    }
    return 0;
}