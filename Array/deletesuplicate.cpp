#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> delete_duplicate(vector<int>& arr){
    unordered_set<int> set;
    vector<int> ans;
    for(int x:arr){
         
        if(set.find(x)==set.end()){
            ans.push_back(x);
        set.insert(x);
        }
    }

    return ans;
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> answer=delete_duplicate(arr);
    for(int x:answer){
        cout<<x<<" ";
    }

}