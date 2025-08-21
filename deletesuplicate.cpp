#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> find_duplicate(vector<int>& arr){
unordered_map<int,int> mp;
vector<int> ans;

for(int i=0;i<arr.size();i++){
    mp[arr[i]]++;
}
for(auto &entry:mp){
    ans.push_back(entry.first);
}
return ans;
}


int main(){
    int n;
    cout<< "enter size of array";
    cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}

vector<int> result=find_duplicate(arr);
for(int i:result){
    cout<<i<<" ";
}

}