// Link to problem :
// https://leetcode.com/problems/to-lower-case/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        for (char &c : s) {
            if (isupper(c)) {
                c = tolower(c);
            }
        }
        return s;
    }
};

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    Solution sol;
    cout<<"The lowercase string is: "<<sol.toLowerCase(s)<<endl;
    return 0;
}