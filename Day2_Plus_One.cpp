// Link to Problem :
// https://leetcode.com/problems/plus-one/

#include <iostream>
#include <vector>

std::vector<int> incrementLargeInteger(std::vector<int>& digits) {
    int n = digits.size();
    int carry = 1; 

    for (int i = n - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        digits[i] = sum % 10; 
        carry = sum / 10;   

        if (carry == 0) {
            break;
        }
    }

    if (carry > 0) {
        digits.insert(digits.begin(), carry);
    }

    return digits;
}

int main() {
    std::vector<int> digits = {9, 9, 9}; 

    std::vector<int> result = incrementLargeInteger(digits);

    std::cout << "Result: ";
    for (int digit : result) {
        std::cout << digit << " ";
    }
    std::cout << std::endl;

    return 0;
}
