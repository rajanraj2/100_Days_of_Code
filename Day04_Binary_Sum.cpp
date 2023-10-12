// Link to problem :
// https://leetcode.com/problems/add-binary/

#include <iostream>
#include <string>

std::string addBinary(std::string a, std::string b) {
    std::string result;
    int carry = 0;

    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;

        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }

        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }

        carry = sum / 2;
        sum %= 2;

        result = static_cast<char>('0' + sum) + result;
    }

    return result;
}

int main() {
    std::string a = "1011";
    std::string b = "1101";

    std::string sum = addBinary(a, b);

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
