// #include <iostream>
// using namespace std;
// int main(){
//     int arr[10]={};
//     for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
//         cout<<"Ente rthe value for "<<i<<" ";
//         cin>>arr[i];
//     }
//     for (int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
//         cout<<arr[i]<<endl;
//     }
    
// }

#include <iostream>
using namespace std;
void solve(int a){
    cout<<a;
    a++;
    cout<<a;
}
int main (){
    // int a = 10;
    // int &temp = a;
    // temp +=10;
    // cout<<a;
    // cout<<temp;
    // char a = 'a';
    // cout<<a*1;
    int a = 5;
    cout<<5;
    solve(a);
    cout<<a;
    return 0;

} 