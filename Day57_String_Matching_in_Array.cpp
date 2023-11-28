// Link to problem :
// https://leetcode.com/problems/string-matching-in-an-array/description/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> result;

        for (int i = 0; i < words.size(); ++i) {
            for (int j = 0; j < words.size(); ++j) {
                if (i != j) {
                    if (words[j].find(words[i]) != string::npos) {

                        result.push_back(words[i]);
                        break;
                    }
                }
            }
        }

        return result;
    }
};

int main(){
    cout << "Enter the number of words: ";
    int n;
    cin >> n;
    vector<string> words(n);
    cout << "Enter the words: ";
    for (int i = 0; i < n; ++i) {
        cin >> words[i];
    }
    Solution obj;
    vector<string> result = obj.stringMatching(words);
    cout << "The result is: ";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    return 0;
}