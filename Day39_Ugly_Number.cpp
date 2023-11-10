// Link to problem :
// https://leetcode.com/problems/ugly-number/description/

#include <iostream>
using namespace std;

class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) {
            return false; 
        }

        while (n % 2 == 0) {
            n /= 2;
        }
        while (n % 3 == 0) {
            n /= 3;
        }
        while (n % 5 == 0) {
            n /= 5;
        }

        return n == 1;   
    }
};

int main(){
    int n;
    cout<<"Enter the number: ";
    cin >> n;
    Solution s;
    cout<<"Is the number ugly? ";
    cout << s.isUgly(n) << endl;
    return 0;
}