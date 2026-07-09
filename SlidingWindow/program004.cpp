#include<bits/stdc++.h>
using namespace std;

int Something(vector<int> &v,int target){
    int low = 0; 
    int high = 0;
    int res = INT_MAX;
    int sum = 0;
    while(high<v.size()){
        sum+=v[high];
        while(sum>=target){
            int count = high+low-1;
            res = min(count, res);
            sum = sum - v[low];
            low++;
        }
        high++;
    }
    return (res == INT_MAX) ? 0 : res;
}

int main(){
    vector<int> v = {1,2,3,4,5,6,7,7,6,5,0,2,4,7,10,4,5,8,3,7,6};
    cout<<Something(v,55);

}