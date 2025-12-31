#include <bits/stdc++.h>
using namespace std;


 vector<int> maxSlidingWindow_brute(vector<int>& nums, int k) {
        // Result vector to store maximum of each window
        vector<int> result;

        // Loop through the array till the window can slide
        for (int i = 0; i <= nums.size() - k; i++) {
            // Initialize max element as the first element of the window
            int maxVal = nums[i];

            // Traverse through the current window of size k
            for (int j = i; j < i + k; j++) {
                // Update maxVal if a larger value is found
                maxVal = max(maxVal, nums[j]);
            }

            // Append the max of this window to the result
            result.push_back(maxVal);
        }

        // Return the final result
        return result;
    }


  vector<int> maxSlidingWindow(vector<int>& nums, int k) {
            int n=nums.size();
            deque<int> dq;
vector<int> result;
    for(int i=0;i<n;i++){
        if(!dq.empty() && dq.front()<=i-k){
            dq.pop_front();
        }
        while(!dq.empty() && nums[dq.back()]<nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        
         if (i >= k - 1) {
                result.push_back(nums[dq.front()]);

  }
}
return result;
  }
  int main(){

  }