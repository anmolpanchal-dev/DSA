#include <bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int> &nums){
    if(nums.size() < 2) return nums.size();
    int i = 0;
    for(int j = 1; j < nums.size(); j++){
        if(nums[j] != nums[j-1]){
            i++;
            nums[i] = nums[j];
        }
    } 
    return i+1;
}
int main() {

    vector<int> nums = {1,1,2,2,3,3,4,5,5};

    int k = removeDuplicate(nums);

    cout << "Length = " << k << endl;

    for(int i = 0; i < k; i++)
        cout << nums[i] << " ";

    return 0;
}