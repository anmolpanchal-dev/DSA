// 4-Sum means group of four number equal to target all of them should be unique

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> didSomething(vector<int> v1, int target){
    if(v1.size()<4) return {};
    sort(v1.begin(), v1.end());
    vector<vector<int>> ans;
    for(int i = 0; i < v1.size()-3; i++){
        if(i>0 && v1[i] == v1[i-1]) continue;
        for(int j = i+1; j < v1.size()-2; j++){
            if(j>i+1 && v1[j] == v1[j-1]) continue;
            int left = j+1;
            int right = v1.size()-1;
            while(left<right){
                long long sum = 1LL * v1[i] + v1[j] + v1[left] + v1[right];
                if(sum == target){
                    ans.push_back({v1[i], v1[j], v1[left], v1[right]});
                    left++;
                    right--;
                    while(left<right && v1[left] == v1[left-1]){
                        left++;
                    }
                    while(left<right && v1[right] == v1[right+1]){
                        right--;
                    }
                }else if(sum<target){
                    left++;
                }else{
                    right--;
                }
            }
        }
    }
    return ans;
}

int main() {
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    vector<vector<int>> ans = didSomething(v,18);
    for(auto pair : ans){
        for(int element : pair){
            cout<<element<<" ";
        }
        cout<<endl;
    }
    return 0;
}