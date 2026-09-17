#include<bits/stdc++.h>
using namespace std;

void printN(int num){
    if(num == 0){
        return;
    }
    printN(num-1);
    cout<<num<<endl;

}
void printN1(int num){

    
    if(num == 0){
        return;
    }
    cout<<num<<endl;
    printN1(num-1);
}

int fact(int num){
    if(num<=1){
        return 1;
    }
    return num*fact(num-1);
}
int Power(int base, int power){
    if(power<1){
        return 1;
    }
    return base*Power(base,power-1);
}


int main(){
    int n = 5;
    cout<<Power(10,3);
}