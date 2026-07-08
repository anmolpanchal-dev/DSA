#include<bits/stdc++.h>
using namespace std;

int maxSum(vector<int> &v, int k){
    int sum = 0;
    int low = 0; 
    int high = k-1;
    for(int i = low; i <= high; i++){
        sum += v[i]; 
    }
    int maxSum = sum;
    for(int high = k; high < v.size()-1; high++){
        sum = sum + v[high] - v[high-k];
        maxSum = max(sum,maxSum);
    }
    return maxSum;
}

int main(){
    vector<int> v1 = {1,0,0,0,0,10,0,0,0,0,0,0,0,0,1,1,1,1,3,1,1,1,1,6,1};
    cout<<maxSum(v1,4);
    return 0;
}