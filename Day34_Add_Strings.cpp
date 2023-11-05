// Link to problem :
// https://leetcode.com/problems/add-strings/description/

#include <iostream>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;
        string result = "";

        while (i >= 0 || j >= 0 || carry > 0) {
            int digit1 = (i >= 0) ? num1[i] - '0' : 0;
            int digit2 = (j >= 0) ? num2[j] - '0' : 0;

            int sum = digit1 + digit2 + carry;
            carry = sum / 10;
            int digit = sum % 10;

            result = to_string(digit) + result;

            i--;
            j--;
        }

        return result;
    }
};

int main(){
    string num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    Solution obj;
    string result = obj.addStrings(num1, num2);
    cout << "The result is: " << result << endl;
    return 0;
}