// Link to problem :
// https://leetcode.com/problems/add-digits/

#include <iostream>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        if (num == 0) {
            return 0;
        } else {
            return 1 + (num - 1) % 9;
        }
    }
};

int main(){
    int num;
    cout<<"Enter the number: ";
    cin >> num;
    Solution sol;
    cout<<"The sum of the digits of "<<num<<" is: ";
    cout << sol.addDigits(num) << endl;
    return 0;
}