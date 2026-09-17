#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> Something(int arr[],int arrSize){
    vector<vector<int>> v1;
    for(int i = 0; i < arrSize-2; i++){
        if(i>0 && arr[i] == arr[i-1]){
            continue;
        }
        int left = i+1;
        int right = arrSize-1;
        while(left<right){
            int sum = arr[left]+arr[right];
            if(sum == -arr[i]){
                v1.push_back({arr[i],arr[left],arr[right]});
                left++;
                right--;
                while(arr[left]==arr[left-1]){
                    left++;
                }
                while(arr[right]==arr[right+1]){
                    right--;
                }
            }else if(sum < -arr[i]){
                left++;
            }else{
                right--;
            }
        }
    }
    return v1;
}

int main(){
    int arr[] = {-4, -2, -2, -1, 0, 1, 2, 2, 3, 4};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    vector<vector<int>> result = Something(arr, arrSize);
    for(auto pair : result){
        cout<<"[ ";
        for(auto triplet : pair){
            cout<<triplet<<" ";
        }
        cout<<"]\n";
    }
    return 0;
}