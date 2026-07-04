#include<bits/stdc++.h>
using namespace std;

int Something(int arr[], int target, int sizeOfArr){
    int low = 0;
    int high = 0;
    int res = INT_MAX;
    int sum = 0;
    while(high<sizeOfArr){
        sum += arr[high];
        while(sum>=target){
            int count = high-low+1;
            res = min(res,count);
            sum = sum-arr[low];
            low++;
        }
        high++;
    }
    return (res == INT_MAX) ? 0 : res;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,7,6,5,0,2,4,7,10,4,5,8,3,7,5,6};
    int sizeArr = sizeof(arr)/sizeof(arr[0]);
    cout<<Something(arr,10,sizeArr);
}