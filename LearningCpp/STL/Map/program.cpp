#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, int> mpp;
    mpp[1]=2;
    mpp[29]=2;
    mpp[399]=20;
    mpp[4]=200;
    mpp[59]=2000;
    mpp.insert({99,99});
    mpp.emplace(999,99);
    for(auto it : mpp){
        cout<<it.first<<" : "<<it.second<<endl;

    }
    auto it = mpp.find(200);
    cout<<*(it).second;
}