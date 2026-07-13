#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,int> mp;
    int arr[] = {1,2,3,4,5,6,7,4,8,9,1};
    for(int x : arr){
        mp[x]++;
    }
    for(auto y : mp){
        if(y.second > 1){
            cout<<y.first<<" -> "<<y.second<<endl;
        }
    }
}