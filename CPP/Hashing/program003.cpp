#include<bits/stdc++.h>
using namespace std;
bool happyNumber(int n){
    unordered_map<int,int> mp;
    int sum = 0;
    while(sum != 1){ 
        sum = 0;
        while(n != 0){
            int digit = n%10;
            sum += digit*digit;
            n = n/10;
        }
        mp[sum]++;
        if(mp[sum]>1){
            return false;
        }
        n = sum;
    }
    return true;
}


int main(){
    int testCases[] = {
        1, 7, 10, 13, 19,
        23, 2, 4, 12, 20
    };

    for (int n : testCases) {
        cout << n << " -> " << happyNumber(n) << endl;
    }
    
}
