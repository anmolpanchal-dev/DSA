#include <bits/stdc++.h>
using namespace std;

vector<int> Something(int arr[], int arrSize) {
    int left = 0;
    int right = arrSize - 1;

    vector<int> ans(arrSize);

    int index = arrSize - 1;

    while (left <= right) {
        int leftSquare = arr[left] * arr[left];
        int rightSquare = arr[right] * arr[right];

        if (leftSquare > rightSquare) {
            ans[index] = leftSquare;
            left++;
        } else {
            ans[index] = rightSquare;
            right--;
        }

        index--;
    }

    return ans;
}

int main() {
    int arr[] = {-4, -1, 0, 3, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<int> newArr = Something(arr, size);

    for (int i = 0; i < newArr.size(); i++) {
        cout << newArr[i] << " ";
    }

    return 0;
}