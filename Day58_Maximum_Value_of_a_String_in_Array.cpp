// Link to problem :
// https://www.codingninjas.com/studio/problems/reverse-the-order-of-words-in-a-string_1264991?interviewProblemRedirection=true&leftPanelTabValue=PROBLEM

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxValue = 0;

        for (const string& str : strs) {
            int currentMaxValue = calculateValue(str);
            maxValue = max(maxValue, currentMaxValue);
        }
        return maxValue;
    }

private:
    int calculateValue(const string& str) {
        bool isNumeric = true;
        for (char ch : str) {
            if (!isdigit(ch)) {
                isNumeric = false;
                break;
            }
        }

        if (isNumeric) {
            return stoi(str);
        } else {
            return str.length();
        }
    }
};

int main(){
    
}