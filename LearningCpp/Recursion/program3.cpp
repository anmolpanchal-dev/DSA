#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(vector<int> &arr){
    int left = 0;
    int right = arr.size()-1;
    while(left<right){
        if(arr[left]!=arr[right]){
            return false;
        }
            right--;
            left++;

    }
    return true;
}

void reverseArray(vector<int> &arr, int left, int right){
    if(left>=right){
        return;
    }
    swap(arr[left],arr[right]);
    reverseArray(arr,left+1,right-1);
}
int main(){
    vector<int> arr{};
    arr.push_back(40);
    arr.push_back(50);
    arr.push_back(60);
    arr.push_back(70);
    arr.push_back(80);
    arr.push_back(90);
    // bool result = checkPalindrome(arr);
    // if(result){
    //     cout<<"Yes palindrome";

    // }else{
    //     cout<<"Not Palindrome";
    // }
    int sizee = arr.size()-1;
    for(int i = 0; i < arr.size();  i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl<<endl<<endl;
    reverseArray(arr,0,sizee);
    for(int i = 0; i < arr.size();  i++){
        cout<<arr[i]<<endl;
    }
}