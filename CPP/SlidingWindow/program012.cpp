#include <bits/stdc++.h>
using namespace std;

// string something(string v){
//     int low = 0;
//     int high = 0;
//     int maxLength = 0;
//     int start = 0;
//     unordered_map<char,int> mp;
//     for(high = 0; high < v.size(); high++){
//         mp[v[high]]++;
//         while(mp[v[high]] > 1){
//             mp[v[low]]--;
//             if(mp[v[low]] == 0){
//                 mp.erase(v[low]);
//             }
//             low++;
//         }
//         if(maxLength>high-low+1){
//             maxLength = high-low+1;
//             start = low;
//         }
//         maxLength = max(maxLength,(int)mp.size());
//     }
//     return v.substr(start, high-low+1);
// }


// vector<vector<int>> Something(vector<int> v) {
//     if (v.size() == 0 || v.size() == 1)
//         return {};

//     sort(v.begin(), v.end());

//     int left = 0;
//     int right = v.size() - 1;

//     vector<vector<int>> store;

//     while (left < right) {
//         int sum = v[left] + v[right];

//         if (sum == 0) {
//             store.push_back({v[left], v[right]});

//             while (left < right && v[left] == v[left + 1]) {
//                 left++;
//             }

//             while (left < right && v[right] == v[right - 1]) {
//                 right--;
//             }

//             left++;
//             right--;

//         } else if (sum < 0) {
//             left++;
//         } else {
//             right--;
//         }
//     }

//     return store;
// }


 vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size()-2; i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            if(nums[i] > 0){
                break;
            }
            int left = i+1; 
            int right = nums.size()-1;
            while(left<right){
                int sum = nums[i]+nums[left]+nums[right];
                if(sum==0){
                    ans.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left<right && nums[left]==nums[left-1]){
                        left++;
                    }
                    while(left<right && nums[right]==nums[right+1]){
                        right--;
                    }

                }else if(sum < 0){
                    left++;
                }else{
                    right--;
                }
            }

        }
        return ans; 
    }

int main() {

    // cout << something("skdafseirdnmczmzxcsdajkfeorb");
    vector<int> v = {-4,-3,-2,-1,4,4,3,2,3,4,5,3,1,2,3,4,5};
    vector<vector<int>> v1 = Something(v);
    for(auto num : v1){
        for(auto v : num){
            cout<<v<<" ";
        }
        cout<<endl;
    }

    return 0;
}