#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> power_set(vector<int>& nums){
    int n=nums.size();
    int subset = 1<<n;

    vector<vector<int>> ans;
    for(int no=0;no<subset;no++){
        vector<int> temp;
        for(int i=0;i<n;i++){
            if(no & (1<<i)){
                temp.push_back(nums[i]);
            }
        }
        ans.push_back(temp);
    }
    return ans;
}


int main(){

}