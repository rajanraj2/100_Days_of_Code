// Link to problem :
// https://www.codingninjas.com/studio/problems/most-frequent-element_4220041?count=25&page=2&search=&difficulty%5B%5D=Easy&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
#include <unordered_map>
using namespace std;

char mostFrequentChar(string &s)
{
	unordered_map<char, int> charCount;
    int maxFrequency = 0;
    char mostFrequent = s[0];
    
    for (char c : s) {
        if (isalpha(c)) {
            charCount[c]++;
            
            if (charCount[c] > maxFrequency) {
                maxFrequency = charCount[c];
                mostFrequent = c;
            } else if (charCount[c] == maxFrequency && c < mostFrequent) {
                mostFrequent = c;
            }
        }
    }
    if (mostFrequent == '0') {
        return '0';
    }
    return mostFrequent;
}

int main(){
    string s;
    cout<<"Enter the string: ";
    cin >> s;
    cout<<"Most frequent character: ";
    cout << mostFrequentChar(s) << endl;
    return 0;
}