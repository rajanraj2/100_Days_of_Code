// Link to problem :
// https://www.codingninjas.com/studio/problems/raju-and-his-string_3959297?count=25&page=1&search=&difficulty%5B%5D=Easy&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
using namespace std;

bool isGoodString(string &s, int n) {
    unordered_set<char> uniqueChars;
    for (char c : s) {
        uniqueChars.insert(c);
    }
    return uniqueChars.size() % 2 == n % 2;
}

int main(){
    int n;
    cout<<"Enter the length of the string: ";
    cin >> n;
    string s;
    cout<<"Enter the string: ";
    cin >> s;
    cout<<"The string is "<<(isGoodString(s, n) ? "good" : "bad")<<endl;
    return 0;
}