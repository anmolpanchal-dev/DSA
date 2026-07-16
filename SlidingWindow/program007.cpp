// Longest Substring with k distinct character
#include<bits/stdc++.h>
using namespace std;

int longestSubstring(string str, int k, int len){
    int low = 0; 
    int high = 0;
    int maxLength = -1;
    unordered_map <char, int> mp;
    while(high < len){
        mp[str[high]]++;

        while(mp.size() > k){

            mp[str[low]]--;

            if(mp[str[low]] == 0){
                
                mp.erase(str[low]);

            }
            low++;
        }
        if(mp.size() == k){

            maxLength = max(maxLength, high-low+1);

        }
        high++;
    }
    return maxLength;
}
int main(){
     string str = "aaaaaaaaaaaaaaaaaaaa";

    cout << longestSubstring(str,1,str.length());


}