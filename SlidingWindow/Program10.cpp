#include<bits/stdc++.h>
using namespace std;
bool minWindow(string s, string t){
    if(t.size() > s.size()){
        return false;
    }
    int low = 0;
    int high = 0;
    int requiredLength = t.size();
    for(high = )
}

int main(){
    string s = "anmol";
    string t = "panchal";
    cout<<minWindow(s,t);
    return 0;
}