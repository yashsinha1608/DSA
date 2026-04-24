#include <bits/stdc++.h>
using namespace std;

struct Job {
    int id, deadline, profit;
};

bool comp(Job a, Job b) {
    return a.profit > b.profit;  // sort by profit descending
}

pair<int,int> jobSequencing(vector<Job>& arr) {
          sort(arr.begin(), arr.end(), comp);
          int totalp=0;
          int count=0;
          int maxdead=-1;
          for(int i=0;i<arr.size();i++) maxdead=max(maxdead,arr[i].deadline);
            vector<int> hash(maxdead + 1, -1);
    for(int i=0;i<arr.size();i++){
        for(int j=arr[i].deadline;j>0;j--){
            if(hash[j]==-1){
                count++;
                totalp+=arr[i].profit;
                hash[j]=arr[i].id;
                break;
            }

        }

    }
return {count,totalp};
}
int main(){
    
}