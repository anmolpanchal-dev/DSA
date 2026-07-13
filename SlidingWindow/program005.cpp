// Sliding Window First Question 
#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int size, int n){
    int low = 0;
    int high = size-1;
    int maxSum = INT_MIN;
    int sum = 0;
    for(int i = low; i <= high; i++){
        sum += arr[i];
    }
    while(high < n){
        maxSum = max(sum, maxSum);
        high++;
        if(high == n) break;
        sum = sum + arr[high] - arr[low];
        low++;
    }
    return maxSum;
}


int minLength(int arr[], int target, int len){

    int low = 0;
    int high = 0;
    int minLength = INT_MAX;
    int sum = 0;

    while(high<len){
        sum += arr[high];
        while(sum>=target){
            minLength = min(minLength,  high-low+1);
            sum -= arr[low];
            low++;
        }
        high++;
    }
    return minLength;
}

string longestSubstring(string str, int k){

}

int main(){
    int arr[] = {10,11,12,2,3,4,5,6,7,8,9,10};
    
    // cout<<maxSum(arr, 5, 10);
    // char a = 'a';
    // char b  = 'b';
    // cout<<a+b; 
    return 0;
}