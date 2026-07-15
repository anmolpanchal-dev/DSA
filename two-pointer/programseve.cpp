#include<bits/stdc++.h>
using namespace std;

bool Palindrome(const string &str){
    int left = 0; 
    int right = str.size()-1;
    while(left<right){
        if(str[left]!=str[right]){
            return false;
        }
        right--;
        left++;
    }
    return true;
}

vector<int> moveZero(vector<int> v){
    int left = 0;
    int right = 0;
    for(right = 0; right < v.size(); right++){
        if(v[right] != 0){
            swap(v[left],v[right]);
            left++;
        }
    }
    return v;
}

vector<char> reverseString(vector<char> v){
    int left = 0; 
    int right = v.size()-1;
    while(left<right){
        swap(v[left],v[right]);
        right--;
        left++;
    }
    return v;
}

vector<char> reverseString001(vector<char> &v){
    int left = 0; 
    int right = v.size()-1;
    while(left<right){
        swap(v[left],v[right]);
        right--;
        left++;
    }
    return v;
}
int main(){

    // cout<<Palindrome("maadaam");

    // vector<int> v1 = {1,2,1,0,0,0,3,2,1,2,3,10,0,0,0,0,0,};
    // vector<int> v2 = moveZero(v1);
    // for(auto x: v2){
    //     cout<<x<<" ";
    // }

    // vector<char> v1 = {'q','d','s','a','d','s','a','e','f','r','t','g','y'};
    // reverseString(v1);
    // for(auto x: v1){
    //     cout<<x<<" ";
    // }

    

}