// Link to problem on leetcode
// https://leetcode.com/problems/palindrome-number/

#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string x_str = std::to_string(x);
    
        int left = 0;
        int right = x_str.length() - 1;
    
        while (left < right) {
            if (x_str[left] != x_str[right]) {
                return false; 
            }
            left++;
            right--;
        }
    
        return true;
    }
};

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    Solution solution;
    bool isPalindrome = solution.isPalindrome(num);

    if (isPalindrome) {
        std::cout << num << " is a palindrome." << std::endl;
    } else {
        std::cout << num << " is not a palindrome." << std::endl;
    }

    return 0;
}
