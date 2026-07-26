#include <bits/stdc++.h>
using namespace std;

int maximumUniqueSubarray(vector<int> &nums){
    int low = 0;
    int high = 0;
    int sum = 0;
    int maxSum = INT_MIN;
    unordered_map<int,int> mp;
    for(high = 0; high < nums.size(); high++){
        mp[nums[high]]++;
        sum+=nums[high];
        while(mp[nums[high]] > 1){
            mp[nums[low]]--;
            sum-=nums[low];
            low++;
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}


int main() {
    
    return 0;
}