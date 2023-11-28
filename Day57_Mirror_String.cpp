// Link to problem :
// https://www.codingninjas.com/studio/problems/mirror-string_1104722?interviewProblemRedirection=true&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
using namespace std;

bool isReflectionEqual(string &s)
{
	int n = s.length();
    string mirrorChars = "AHIMOTUVWXY";

    for (int i = 0; i < n; ++i)
    {
        if (mirrorChars.find(s[i]) == string::npos)
        {
            return false;
        }
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main(){
    cout << "Enter the string: ";
    string input;
    getline(cin, input);
    if (isReflectionEqual(input))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}