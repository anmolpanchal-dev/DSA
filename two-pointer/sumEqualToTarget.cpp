#include <iostream>
using namespace std;
void sumEqualToTarget(int arr[], int size, int target){
    int left = 0;
    int right = size - 1;
    while (left < right){
        int sum = arr[left]+arr[right];
        if ( sum == target){
            cout << arr[left] << " " << arr[right];
            return ;
        } else if ( sum < target){
            left ++ ;
        } else {
            right -- ;
        }
    }
    cout << "No pair found";
}
int main(){

    int arr[] = {1,2,3,4,6};

    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 7;

    sumEqualToTarget(arr, size, target);

    return 0;
}