// Link to problem :
// https://www.codingninjas.com/studio/problems/is-subsequence_892991?topList=top-dynamic-programming-questions&leftPanelTab=0

#include <bits/stdc++.h> 
using namespace std;

bool isSubSequence(string str1, string str2) {
    int m = str1.length();
    int n = str2.length();
    
    int i = 0, j = 0;
    
    while (i < m && j < n) {
        if (str1[i] == str2[j]) {
            i++;
        }
        j++;
    }
    
    return i == m; 
}

int main(){
    string str1;
    string str2;
    cout<<"Enter the first string: ";
    cin >> str1;
    cout<<"Enter the second string: ";
    cin >> str2;
    isSubSequence(str1, str2) ? cout << "Yes\n" : cout << "No\n";
    return 0;
}