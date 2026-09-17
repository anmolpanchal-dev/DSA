// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){

//     fstream file;

//     file.open("student.txt");

//     file<<"Anmol Panchal";

//     file.close();

// }


#include <iostream>
#include<fstream>
using namespace std;
int main(){
    // ofstream fout;
    // fout.open("Student2.txt");
    // fout<<"Hello Brother";
    // fout.close();
    // return 0;

    int arr[10];
    for (int i = 0; i < 10; i++){
        cout<<"Enter number "<<i<<" - ";
        cin>>arr[i];
    }
    ofstream fout;
    fout.open("number.txt");
    for(int i=0; i<10; i++){
        fout<<arr[i]<<" ";
    }
    fout.close();


}