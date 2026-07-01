#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 19485;
    while(num/10!=0){
        cout<<num%10;
        num=num/10;
    }
}