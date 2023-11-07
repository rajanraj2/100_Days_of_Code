// Link to problem :
// https://leetcode.com/problems/reverse-only-letters/description/

#include <iostream>
using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left = 0;
        int right = s.length() - 1;
        
        while (left < right) {
            if (!isalpha(s[left])) {
                left++;
            } else if (!isalpha(s[right])) {
                right--;
            } else {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};

int main(){
    string s;
    cout<<"Enter the string: ";
    cin >> s;
    Solution sol;
    cout<<"Reversed string: ";
    cout << sol.reverseOnlyLetters(s) << endl;
    return 0;
}