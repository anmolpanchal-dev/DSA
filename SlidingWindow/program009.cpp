#include<bits/stdc++.h>
using namespace std;

int maxLength(string s){
    int low = 0;
    int high = 0;
    vector<int> v[26,0];
    int maxfreqWord = 0;
    int ans = INT_MIN;
    for(high = 0; high < s.size(); high++){
        v[str[high] -'A']++;
        maxFreq = max(maxFreq,v[str[high] -'A']);
        while(((high-low+1)-maxFreq) > k){
            v[str[low]-'A']--;
            low++;
        }
        ans = max(ans, high-low+1);
    }
    return ans


}

int main(){


}