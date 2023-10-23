// Link to problem :
// https://www.codingninjas.com/studio/problems/anagram-pairs_626517?leftPanelTab=0

#include <iostream>
#include <unordered_map>
using namespace std;

bool isAnagram(string str1, string str2)
{
    if (str1.length() != str2.length()) {
        return false;
    }

    unordered_map<char, int> freq1;
    unordered_map<char, int> freq2;

    for (char c : str1) {
        freq1[c]++;
    }

    for (char c : str2) {
        freq2[c]++;
    }

    return freq1 == freq2;
}

int main(){
    string s, t;
    cout<<"Enter the first string: ";
    cin >> s;
    cout<<"Enter the second string: ";
    cin >> t;
    cout<<"Are "<<s<<" and "<<t<<" anagrams? ";
    cout << isAnagram(s, t) << endl;
    return 0;
}