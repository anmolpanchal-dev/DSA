#include <bits/stdc++.h>
using namespace std;

string something(string s, string t){
    if (s.size() < t.size()) return "";
    unordered_map<char, int> window, need;
    for(auto ch: t){
        need[ch]++;
    } 
    int required = need.size();
    int left = 0;
    int formed = 0;
    int minLength = INT_MAX;
    int start = 0;
    for(int right = 0; right < s.size(); right++){
        char ch = s[right];
        window[ch]++;
        if(need.count(ch) && window[ch] == need[ch]) formed++;
        while(left <= right && formed == required){
            if(right-left+1 < minLength){
                minLength = right-left+1;
                start = left;
            }
            window[s[left]]--;
            if(need.count(s[left]) && window[s[left]] < need[s[left]]){
                formed--;
            }
            left++;
        }
    }
    if(minLength == INT_MAX) return "";
    return s.substr(start , minLength);
}


int main() {
    string s = "ABHFYRHGDYEHDBFHGTGBDHTRW";
    string t = "AW";
    cout<<something(s,t);
    return 0;
    ABHFYRHGDYEHDBFHGTGBDHTRW
}