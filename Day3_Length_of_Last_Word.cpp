// Link to problem :
// https://leetcode.com/problems/length-of-last-word/

#include <iostream>
#include <string>

using namespace std;

int lengthOfLastWord(string s) {
    int length = 0;
    int i = s.length() - 1;

    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}

int main() {
    string s = "Hello World";
    int result = lengthOfLastWord(s);

    cout << "Length of the last word: " << result << endl;

    return 0;
}
