#include<bits/stdc++.h>
using namespace std;

void countSomething(int num){
    vector<int> arr;

    for(int i = 1; i <= num; i++){
        int sum = 0;
        int temp = i;

        while(temp > 0){
            sum += temp % 10;
            temp /= 10;
        }

        if(sum % 2 == 0){
            arr.push_back(i);
        }
    }

    for(int x : arr){
        cout << x << " ";
    }
}

int main(){
    int num = 100;
    countSomething(num);
}