// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> arr(5);
//     int sum = 0;
//     for (int i = 0; i<5; i++){
//         cout<<"Enter Number : ";
//         cin>>arr[i];
        
//     }
//     for (int i = 0; i<arr.size(); i++){
//         sum+=arr[i];
//     }
//     cout<<sum;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Size of array : ";
//     cin>>n;
//     vector<int> arr(n);
//     for(int i = 0; i < n; i++){
//         cout<<"Enter "<<i+1<<" number: ";
//         cin>>arr[i];
//     }
//     int max = arr[0];
//     for(int i = 0; i < n; i++){
//         if (arr[i]>max){
//             max = arr[i];
//         }
//     }
//     cout<<endl<<"Maximum Number is : "<<max;
// }


#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cout<<"Enter "<<i+1<<" Number: ";
        cin>>arr[i];
    }
    for (int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    int left = 0;
    int right = arr.size()-1;
    while(left<right){
        arr[left] = arr[left]+arr[right];
        arr[right] = arr[left]-arr[right];
        arr[left] = arr[left]-arr[right];
        left++;
        right--;
    }
    cout<<endl;
    for (int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}