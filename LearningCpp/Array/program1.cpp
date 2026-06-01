#include <iostream>
using namespace std;
int main(){
    int arr[11] = {1,2,3,4,5,6,7,8,9,10,0};
    arr[1] = 20;
    for(int i = 0; i < 11 ; i ++){
        cout<<arr[i]<<endl;
    }

    return 0;
}