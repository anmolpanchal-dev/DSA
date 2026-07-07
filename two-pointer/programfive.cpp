#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> Something(vector<int> &v, int target){
    sort(v.begin(), v.end())
    vector<vector<int>> ans;
    for(int i = 0; i < v.size()-2; i++){
        if(i>0 && v[i] == v[i-1]){
            continue;
        }
        int left = i+1;
        int right = v.size()-1;
        while(left<right){
            int sum = v[i]+v[left]+v[right];
            if(sum<target){
                for(int k = left + 1; k <= right; k++) {
                    ans.push_back({v[i], v[left], v[k]});
                }   
                left++;
                while(left<right && v[left] == v[left-1]){
                    left++;
                }
            }else{
                right--;

            }

        }
    }
    return ans;
}

int main(){
    vector<int> v = {-1, 0, 2, 1, -4};
    int target = 2;
    vector<vector<int>> result = Something(v, target);
    for(auto triplet : result){
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]\n";    
    }
    return 0;
}