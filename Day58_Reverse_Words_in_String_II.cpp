// Link to problem :
// https://leetcode.com/problems/maximum-value-of-a-string-in-an-array/description/

#include <iostream>
#include <algorithm>
using namespace std;

string reverseOrderWords(string str) {
    reverse(str.begin(), str.end());

    size_t start = 0, end = 0;
    while (end < str.length()) {
        while (end < str.length() && str[end] != ' ') {
            end++;
        }
        reverse(str.begin() + start, str.begin() + end);
        start = ++end;
    }

    return str;
}

int main(){
    
}