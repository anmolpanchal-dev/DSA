#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int, int> mp;
    int arr[] = {1,2,2,3,1,1,4,5,3,2,1,5,4,5,3,5,6,4,5,7,8,7,10};
    for(auto x: arr){
        mp[x]++;
    }
    for(auto y: mp){
        cout<<y.first<<" "<<y.second<<endl;
    }
}

aabacabcabbaccab