// Link to problem :
// https://leetcode.com/problems/second-largest-digit-in-a-string/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondHighest(string s) {
        int first = -1, second = -1;
        for (char c : s) {
            if (isdigit(c)) {
                int num = c - '0';
                if (num > first) {
                    second = first;
                    first = num;
                } else if (num < first && num > second) {
                    second = num;
                }
            }
        }
        return second;
    }
};

int main(){
    string s;
    cout<<"Enter the string: ";
    cin >> s;
    Solution obj;
    cout<<"Second largest digit: ";
    cout << obj.secondHighest(s) << endl;
    return 0;
}