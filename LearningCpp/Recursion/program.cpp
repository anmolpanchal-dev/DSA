#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void reverseWords(string &s) {
    int start = 0;

    for (int i = 0; i <= s.size(); i++) {

        // Jab space ya string ka end mile
        if (i == s.size() || s[i] == ' ') {

            int left = start;
            int right = i - 1;

            while (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }

            // Agle word ka start
            start = i + 1;
        }
    }
}

int main() {
    string s = "I love programming";

    reverseWords(s);

    cout << s;
}