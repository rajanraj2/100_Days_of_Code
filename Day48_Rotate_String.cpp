// Link to problem :
// https://leetcode.com/problems/rotate-string/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if  (s.length() != goal.length()) {
            return false;
        }
        string concatenated = s + s;
        return concatenated.find(goal) != string::npos;
    }
};

int main(){
    string s, goal;
    cout << "Enter the string: ";
    cin>>s;
    cout << "Enter the goal string: ";
    cin>>goal;
    Solution obj;
    cout<<obj.rotateString(s, goal);
    return 0;
}