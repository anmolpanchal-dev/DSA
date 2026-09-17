#include<bits/stdc++.h>
using namespace std;
vector<int> Something(int arr[], int arrSize){
    int left = 0;
    int right = arrSize-1;
    vector<int> v1(arrSize);
    int index = arrSize-1;
    while(left<=right){
        int leftSquare = arr[left]*arr[left];
        int rightSquare = arr[right]*arr[right];
        if(leftSquare > rightSquare){
            v1[index] = leftSquare;
            left++;
        }else{
            v1[index] = rightSquare;
            right--;
        }
        index--;
    }
    return v1;

}
int main(){
    int arr[] = {-4,-2,0,1,3,4,6,10};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    vector<int> v2 = Something(arr, arrSize);
    for(int i = 0; i < arrSize; i++){
        cout<<v2[i]<<" ";
    }
}