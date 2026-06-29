#include<iostream>
using namespace std;
void printP(int n){
        for(int i = 0 ; i < n; i++){
            for(int j = 1; j <= i+1; j++){
                cout<<"* ";
            }
        cout<<endl;
    }
}
int main(){
    int n ;
    cout<<"Enter a Number: ";
    cin>>n;
    printP(n);
}