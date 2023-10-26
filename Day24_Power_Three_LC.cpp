// Link to problem :
// https://leetcode.com/problems/power-of-three/

#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) {
            return false; 
        }
        double logResult = log10(n) / log10(3);
        return (logResult - int(logResult)) == 0;
    }
};

int main(){
    Solution sol;
    int n;
    cout<<"Enter the number: ";
    cin >> n;
    cout << sol.isPowerOfThree(n) << endl;
    return 0;
}