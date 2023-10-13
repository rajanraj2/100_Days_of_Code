// Link to problem :
// https://www.codingninjas.com/studio/problems/remove-consecutive-duplicates_893195?leftPanelTab=0

#include <iostream>
#include <string>
using namespace std;

string removeDuplicate(string &s)
{
    string res = "";
    int size =s.length();

    if(size ==1)return s;

    for (int i = 0; i <= size-1; i++) {
        if(s[i] != s[i+1] ){
            res+=s[i];
        }
    }
    return res;
}

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<removeDuplicate(s);
    return 0;
}