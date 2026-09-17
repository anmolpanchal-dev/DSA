#include<bits/stdc++.h>
using namespace std;

void Something(string str){
    unordered_map<char,int> mp;
    for(char x: str){
        mp[x]++;
    }
    for(auto x : mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
}

int main(){
Something("banana");
}