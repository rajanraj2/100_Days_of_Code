// Link to problem :
// https://leetcode.com/problems/find-the-difference/ 

#include <iostream>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        int result = 0;
        
        for (char c : s) {
            result -= c;
        }
        
        for (char c : t) {
            result += c;
        }
        
        return static_cast<char>(result);
    }
};

int main(){
    string s, t;
    cout<<"Enter the string s: ";
    cin >> s;
    cout<<"Enter the string t: ";
    cin >> t;
    Solution sol;
    cout<<"The difference between the strings is: ";
    cout << sol.findTheDifference(s, t) << endl;
    return 0;
}