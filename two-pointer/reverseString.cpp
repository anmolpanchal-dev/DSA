#include <iostream>
using namespace std;

string reverseString(string &s){
    int left = 0;
    int right = s.length() - 1;

    while(left < right){
        swap(s[left], s[right]);
        left++;
        right--;
    }

    return s;
}

int main() {
    string name = "Anmol Panchal";

    reverseString(name);   // no copy created

    cout << name;

    return 0;
}