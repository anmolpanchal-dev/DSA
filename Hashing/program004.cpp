#include<bits/stdc++.h>
using namespace std;

string minimumLength(string str, string target){
    if(str.size() < target.size()){
        return false;
    }
    unordered_map<char, int> having, needed;
    int low = 0; 
    int start = 0;
    int formed = 0;
    int minLength = INT_MAX;
    
    for(auto ch : target){
        needed[target[ch]]++;
    }
    int required = needed.size();

    for(int high = 0; high < str.size(); high++){
        char ch = str[high];
        having[ch]++;
        if(having.count(ch) && having[ch] == needed[ch]){
            formed++;
        }
        while(left<= right && formed == required){
            if(high-low+1 < minLength){
                minLength = high-low+1;
                start = left;
            }
            having[str[left]]--;
            if(need.count(str[left]) && having[str[left]] < needed[str[left]]){
                formed--;
            }
            left++;
        }
    }

    if(minLength == INT_MAX){
        return "";
    }
    return str.substr(start, minLength);


}

int main(){

}