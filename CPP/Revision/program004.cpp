#include <bits/stdc++.h>
using namespace std;

string Something(string s, string t){
    if(s.size() < t.size()) return "";
    unordered_map<char, int> window, target;
    for(auto element : t){
        target[element]++;
    }
    int required = target.size();
    int low = 0;
    int formed = 0;
    int start = 0;
    int minLength = INT_MAX;
    for(int high = 0; high < s.size(); high++){
        char ch = s[high];
        window[ch]++;
        if(target.count(ch) && window[ch] == target[ch]){
            formed++;
        }
        while(low <= high && formed == required){
            if(high-low+1 < minLength){
                minLength = high-low+1;
                start = low;
            }
            window[s[low]]--;
            if(target.count(s[low]) && window[s[low]] < target[s[low]]){
                formed--;
            }
            low++;
        }
    }
     return (minLength == INT_MAX)? "": s.substr(start,minLength);
}

int main() {

    string s = "ADOBECODEBANC";
    string t = "ABC";

    string ans = Something(s, t);

    if(ans == "")
        cout << "No window found";
    else
        cout << ans << endl;

    return 0;
}