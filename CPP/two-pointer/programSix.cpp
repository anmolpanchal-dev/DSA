#include<bits/stdc++.h>
using namespace std;

vector<int> Something(vector<int> &v){
    int countZero = 0;
    int countOne = 0;
    int countTwo = 0;
    vector<int> ans;
    for(int i = 0; i < v.size()-1; i++){
        if(v[i]==0){
            countZero++;
        }else if(v[i]==1){
            countOne++;
        }else{
            countTwo++;
        }
    }
    for(int j = 0; j < countZero; j++){
        ans.push_back(0);
    }
    for(int k = 0; k < countOne; k++){
        ans.push_back(1);
    }
    for(int l = 0; l < countTwo; l++){
        ans.push_back(2);
    }
    return ans;
    
}

int main(){
    vector<int> v1 = {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,3,1,1,1,1,1};
    vector<int> result = Something(v1);
    for(auto num : result){
        cout<<num<<" ";
    }
    return 0;
}