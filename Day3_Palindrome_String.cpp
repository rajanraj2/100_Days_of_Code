// Link to problem :
// https://www.codingninjas.com/studio/problems/check-if-the-string-is-a-palindrome_1062633

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string cleanAndNormalize(string s) {
    string cleanedString = "";

    for (char c : s) {
        if (isalnum(c)) {
            cleanedString += tolower(c);
        }
    }

    return cleanedString;
}

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    
    return true;
}

int main() {
    string input;
    getline(cin, input);

    string cleanedInput = cleanAndNormalize(input);

    if (isPalindrome(cleanedInput)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}
