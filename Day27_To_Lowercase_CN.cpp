// Link to problem:
// https://www.codingninjas.com/studio/problems/convert-to-lower-case_3744734?leftPanelTab=0

#include <bits/stdc++.h> 
using namespace std;

string toLowerCase(string &str){
    for (char &c : str) {
        c = tolower(c);
    }
    return str;
}

int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    cout<<"The lowercase string is: "<<toLowerCase(str)<<endl;
    return 0;
}