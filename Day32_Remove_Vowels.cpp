// Link to problem :
// https://www.codingninjas.com/studio/problems/remove-vowels_839735?count=25&page=3&search=&difficulty%5B%5D=Easy&sort_entity=avg_time&sort_order=ASC&attempt_status=NOT_ATTEMPTED&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
using namespace std;

string removeVowels(string inputString) {
    string result = "";

    for (char ch : inputString) {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result += ch;  
        }
    }
    return result;
}

int main(){
    string inputString;
    cout << "Enter the input string: ";
    cin >> inputString;

    string result = removeVowels(inputString);
    cout << "The result is: " << result << endl;
    return 0;
}