#include<bits/stdc++.h>
using namespace std;


int MaxSum(int arr[],int arrSize,int n){
    int low = 0;
    int high = n-1;
    int sum = 0;
    for(int i = low; i <= high; i++){
        sum += arr[i];
    }
    int maxSum = sum;
    for(int high = n; high < arrSize; high++) {
        sum = sum + arr[high] - arr[high - n];
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}



int main(){
    int arr[] = {2, 1, 5, 1, 3, 3, 2,10};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    cout<<MaxSum(arr,arrSize,4);
}