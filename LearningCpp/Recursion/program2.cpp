#include<iostream>

using namespace std;

// int sumOfNum(int num){
//     if(num == 0){
//         return 0;
//     }
//     return num + sumOfNum(num-1);
// }

void sumOfNums(int num, int sum){
    if(num < 1){
        cout<<sum;
        return ;
    }
    sumOfNums(num-1,sum+num);
}
int main(){
    int n = 10;
    sumOfNums(n,0);

}