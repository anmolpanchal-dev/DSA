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

vector<int> removeDuplictes(vector<int> &v){
    int left = 0;
    int right = 1;
    while(right < v.size()){
        if(v[right] == v[left]){
            v.erase(v.begin()+right);
        }else{
            right++;
            left++;
        }
    }
    return v;
}

int removeDuplictes001(vector<int> &v){
    int left = 0;
    for(int right = 1; right < v.size(); right++){
        if(v[right]!=v[left]){
            left++;
            v[left] = v[right];
        }
    }
    return left+1;
}

vector<int> mergeVector(vector<int> &a, int num1, vector<int> &b, int num2){
    int i = num1-1;
    int j = num2-1;
    int k = a.size()-1;
    while(i >= 0 && j >= 0){
        if(a[i]>b[j]){
            a[k] = a[i];
            i--;
        }else{
            a[k] = b[j];
            j--;
        }
        k--;
    }
    while (j >= 0) {
            a[k] = b[j];
            j--;
            k--;
        }
        return a;
}
int slidingWindow(vector<int> &v, int k){
    int low = 0;
    int high = k-1;
    int sum = 0;
    int maxSum = sum;
    for(int i = low; i <= high; i++){
        sum += v[i];
    }
    while(high < v.size()){
        maxSum = max(sum, maxSum);
        if(high < v.size()) high++ ;
        sum = sum + v[high] - v[low];
        low++;
    }
    return maxSum;
}

int maxSumTarget(vector<int> &v, int target){
    int low = 0;
    int high = 0;
    int sum = 0;
    int res = INT_MAX;
    while(high < v.size()){
        sum += v[high];
        while(sum>=target){
            res = min(res, high-low+1);
            sum -= v[low];
            low++;
        }
        high++;
    }
    return (res ==  INT_MAX) ? 0 : res;
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

    // vector<int> v = {1,1,2,2,3,3,3,3,3,3,3,3,4};
    // removeDuplictes(v);
    // for(auto x: v){
    //     cout<<x<<" ";
    // }

    // vector<int> v1 = {1,3,5,0,0,0};
    // vector<int> v2 = {2,4,6};
    // mergeVector(v1,3,v2,3);
    // for(auto x: v1){
    //     cout<<x<<" ";
    // }

    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    cout<<maxSumTarget(v,12);
    return 0;
}
