#include <bits/stdc++.h>
using namespace std;

string something(string s, string t){
    if(s.size() < t.size())return "";
    unordered_map<char,int> window, need;

    for(auto ch : t){
        need[ch]++;
    }

    int low = 0;
    int formed = 0;
    int minLength = INT_MAX;
    int start = 0;
    int required = t.size();

    for(int high = 0; high < s.size(); high++){
        char ch = s[high];
        window[ch]++;
        if(need.count(ch) && need[ch] == window[ch]){
            formed++;
        }
        while(formed == required && low<=high){
            if(high-low+1 < minLength){
                minLength = high-low+1;
                start = low;
            }
            window[s[low]]--;
            if(need.count(s[low]) && need[s[low]] != window[s[low]]){
                formed--;
            }
            low++;
        }
    }
    return (minLength == INT_MAX)?"":s.substr(start,minLength);

}

int main() {
    string s = "ABABSBDBABSBSBSBAGSBJDBABGDB";
    string t = "BG";
    cout<<something(s,t);
    return 0;
}