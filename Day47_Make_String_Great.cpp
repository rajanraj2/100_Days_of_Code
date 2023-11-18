// Link to problem :
// https://leetcode.com/problems/make-the-string-great/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string makeGood(string s) {
        stack<char> stk;

        for (char c : s) {
            if (!stk.empty() && abs(stk.top() - c) == 32) {
                stk.pop();
            } else {
                stk.push(c);
            }
        }

        std::string result;
        while (!stk.empty()) {
            result = stk.top() + result;
            stk.pop();
        }
        return result;
    }
};

int main(){
    string s;
    cout << "Enter the string: ";
    cin>>s;
    Solution sol;
    cout<<sol.makeGood(s);
    return 0;
}