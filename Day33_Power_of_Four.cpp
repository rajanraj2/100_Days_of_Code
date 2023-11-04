// Link to problem :
// https://leetcode.com/problems/power-of-four/description/

#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) {
            return false;
        }

        if ((n & (n - 1)) == 0) {
            int countTrailingZeros = 0;
            while ((n & 1) == 0) {
                countTrailingZeros++;
                n >>= 1;
            }
            return countTrailingZeros % 2 == 0;
        }

        return false;
    }
};

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    Solution obj;
    bool result = obj.isPowerOfFour(n);
    cout << "The result is: " << result << endl;
    return 0;
}