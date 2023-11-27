// Link to problem :
// https://www.codingninjas.com/studio/problems/all-substrings_1262347?leftPanelTabValue=PROBLEM

#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(string input) {
    for (int start = 0; start < input.length(); ++start) {
        for (int end = start; end < input.length(); ++end) {
            for (int i = start; i <= end; ++i) {
                cout << input[i];
            }
            cout << endl;
        }
    }
}

int main() {
    cout << "Enter the string: ";
    string input;
    getline(cin, input);
    printSubstrings(input);
    return 0;
}
