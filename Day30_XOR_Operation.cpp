// Link to problem :
// https://leetcode.com/problems/xor-operation-in-an-array/description/

#include <iostream>
using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
         int result = 0;
        
        for (int i = 0; i < n; i++) {
            result ^= (start + 2 * i);
        }
        
        return result;
    }
};

int main(){
    int n;
    int start; // Starting number for XOR operation
    
}