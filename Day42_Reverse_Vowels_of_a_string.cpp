// Link to problem :
// https://leetcode.com/problems/reverse-vowels-of-a-string/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isvowel(char c){
        c = tolower(c);
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
    
    string reverseVowels(string s) {
        int start = 0;
        int end = s.size()-1;

        while (start<=end){
            char s1 = s[start];
            char s2 = s[end];
            if (!isvowel(s1)){
                start++;
            }
            else if(!isvowel(s2)){
                end--;
            }
            else{
                char temp=s[start];
                s[start]=s[end];
                s[end]=temp;
                start++;
                end--;
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
    cout<<"The string with reversed vowels is: "<<sol.reverseVowels(s)<<endl;
    return 0;
}