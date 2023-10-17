// Link to problem :
// https://leetcode.com/problems/number-of-1-bits/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
         int count = 0;

        for (int i = 0; i < 32; i++) {
            if (n & 1) {
                count++;
            }
            n >>= 1;
        }
        return count;
    }
};

int main(){
    Solution sol;
    uint32_t n;
    cout<<"Enter the number: ";
    cin >> n;
    cout << sol.hammingWeight(n) << endl;
    return 0;
}