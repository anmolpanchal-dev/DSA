#include<bits/stdc++.h>
using namespace std;

int minimunLengeth(vector<int> v1, int target){
    int low = 0;
    int high = 0;
    int minLength = INT_MAX;
    int sum = 0;
    for(high = 0; high < v1.size(); high++){
        sum += v1[high];
        while(sum >= target){
            minLength = min(minLength, high-low+1);
            sum -= v1[low];
            low++;
        }
    }
    return minLength;
}

int main(){
    vector<int> v = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    cout<<minimunLengeth(v,10);
}