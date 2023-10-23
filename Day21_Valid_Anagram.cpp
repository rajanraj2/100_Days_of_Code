// Link to problem:
// https://leetcode.com/problems/valid-anagram/

#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        return s == t;
    }
};

int main(){
    string s, t;
    cout<<"Enter the first string: ";
    cin >> s;
    cout<<"Enter the second string: ";
    cin >> t;
    Solution sol;
    cout<<"Are "<<s<<" and "<<t<<" anagrams? ";
    cout << sol.isAnagram(s, t) << endl;
    return 0;
}