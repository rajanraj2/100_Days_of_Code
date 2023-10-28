// Link to problem :
// https://leetcode.com/problems/find-common-characters/description/

#include <iostream>
#include <vector> 
#include <algorithm>
#include <string>
#include <climits>
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> commonCounts(26, INT_MAX); 

        for (const string& word : words) {
            vector<int> charCounts(26, 0);
            
            for (char c : word) {
                charCounts[c - 'a']++;
            }
            
            for (int i = 0; i < 26; i++) {
                commonCounts[i] = min(commonCounts[i], charCounts[i]);
            }
        }

        vector<string> result;
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < commonCounts[i]; j++) {
                result.push_back(string(1, 'a' + i));
            }
        }
        return result;
    }
};

int main(){
    Solution sol;
    vector<string> words = {"bella","label","roller"};
    vector<string> result = sol.commonChars(words);
    for (string s : result) {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}