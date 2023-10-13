// Link to problem :
// https://leetcode.com/problems/reverse-string/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0;
        int e = s.size()-1;
        while (st<e){
            swap(s[st++],s[e--]);     
        }
    }
};

int main(){
    int n;
    cout<<"Enter the number of characters in the string: ";
    cin>>n;
    vector<char> s(n);
    cout<<"Enter the characters in the string: ";
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    Solution().reverseString(s);
    cout<<"The reversed string is: ";
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
    return 0;
}