#include <bits/stdc++.h>
using namespace std;

bool permutationString(string s1, string s2){
    if(s1.size() > s2.size()) return false;
    unordered_map<char,int> window, need;
    for(auto ch : s1){
        need[ch]++;
    }
    int required = need.size();
    int formed = 0;
    for(int high = 0; high < s2.size(); high++){
        if(need.find(ch) == )
    }
}

int main() {
    
    return 0;
}