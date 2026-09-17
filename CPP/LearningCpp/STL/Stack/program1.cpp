#include<iostream>
#include<vector>
using namespace std;
int main(){
    int Size;
    cout<<"Enter the size of the Array: ";
    cin>>Size;
    vector<int> v(Size);
    for(int i = 0; i < Size; i++){
        cout<<"Enter "<<i+1<<" Number : ";
        cin>>v[i];
    }
    for(int i = 1; i < Size-1; i++){
        if(v[i-1]<v[i] && v[i]>v[i+1]){
            cout<<"Peak Element is at idx: "<<i;
            return 0;
        }
    }
    
}