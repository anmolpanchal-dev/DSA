// kise string se substring nikalne hai without repeation character jiese ki aabbaabbaabb isme max substring length hai 2 ab without repeting 

#include <bits/stdc++.h>
using namespace std;

int didSomething(string str){
    int low = 0;
    int maxSize = 0;
    unordered_map<char, int> mp;
    for(int high = 0; high < str.size(); high++){
        mp[str[high]]++;
        while(mp.size() < high-low+1){
            mp[str[low]]--;
            if(mp[str[low]] == 0){
                mp.erase(str[low]);
            }
            low++;
        }
        if(mp.size() == high-low+1){
            maxSize = max(maxSize, high-low+1);
        }
    }
    return maxSize;
}


int main() {
    string str = "aabsbacbxnmklkabscba";
    cout<<didSomething(str);
    return 0;
}