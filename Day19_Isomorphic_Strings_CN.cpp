#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool areIsomorphic(string &str1, string &str2)
{
     if (str1.length() != str2.length()) {
        return false; 
    }
    
    std::unordered_map<char, char> charMap; 
    std::unordered_map<char, bool> usedChars; 

    for (int i = 0; i < str1.length(); i++) {
        char char1 = str1[i];
        char char2 = str2[i];
        
        if (charMap.find(char1) == charMap.end()) {
            if (usedChars[char2]) {
                return false;
            }
            charMap[char1] = char2;
            usedChars[char2] = true; 
        } else {
            if (charMap[char1] != char2) {
                return false;
            }
        }
    }
    return true;
}

int main(){
    string str1, str2;
    cout<<"Enter the first string: ";
    cin >> str1;
    cout<<"Enter the second string: ";
    cin >> str2;
    cout << areIsomorphic(str1, str2) << endl;
    return 0;
}