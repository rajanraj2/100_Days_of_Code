// Link to code :
// https://leetcode.com/problems/reverse-bits/

#include<iostream>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        for (int i = 0; i < 32; i++) {
            result <<= 1;
            result |= (n & 1);
            n >>= 1;
        }
        return result;
    }
};

int main(){
    uint32_t n;
    cout<<"Enter the number: ";
    cin >> n;
    Solution sol;
    cout << sol.reverseBits(n) << endl;
    return 0;
}