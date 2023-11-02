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
    int n, start;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of start: ";
    cin >> start;
    
    Solution s;
    int result = s.xorOperation(n, start);
    cout << "The result is: " << result << endl;
    return 0;
}