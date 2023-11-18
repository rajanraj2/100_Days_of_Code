// Link to problem :
// https://www.codingninjas.com/studio/problems/amazing-strings_893182?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

string amazingStrings(std::string first, std::string second, std::string third) {
    unordered_map<char, int> charCount;
    for (char c : first) {
        charCount[c]++;
    }
    for (char c : second) {
        charCount[c]++;
    }
    for (char c : third) {
        if (charCount.find(c) == charCount.end() || charCount[c] == 0) {
            return "NO";  
        } else {
            charCount[c]--;
        }
    }
    for (const auto& pair : charCount) {
        if (pair.second != 0) {
            return "NO";  
        }
    }
    return "YES";
}

int main(){
    string first, second, third;
    cout << "Enter the first string: ";
    cin>>first;
    cout << "Enter the second string: ";
    cin>>second;
    cout << "Enter the third string: ";
    cin>>third;
    cout<<amazingStrings(first, second, third);
    return 0;
}