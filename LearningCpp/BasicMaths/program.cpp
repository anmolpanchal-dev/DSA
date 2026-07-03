#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(int num){
    int original = num;
    int rev = 0;
    while(num!=0){
        rev = rev*10+num%10;
        num/=10;
    }
    return original == rev;
}
void countDigit(int num){
    int counts = 0;
    if(num==0){
        counts+=1;
    }
    while(num>0){
        counts ++;
        num/=10;
    }
    cout<<counts;
}
int main(){
    int num = 0;
    countDigit(num);
    // int result = checkPalindrome(num);
    // if(result){
    //     cout<<"Hurrey";
    // }else{
    //     cout<<"Furrey";
    // }
}