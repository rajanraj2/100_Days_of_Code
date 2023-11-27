// Link to problem :
// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        size_t pos = s.find(part);
        while (pos != string::npos) {
            s.erase(pos, part.length());
            pos = s.find(part);
        }
        return s;
    }
};

int main(){
    string s,part;
    cout<<"Enter the string and the part: ";
    cin>>s>>part;
    Solution obj;
    cout<<obj.removeOccurrences(s,part);
    return 0;
}