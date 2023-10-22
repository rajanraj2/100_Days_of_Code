// Link to problem :
// https://leetcode.com/problems/power-of-two/

#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
         if (n <= 0) {
            return false;
        }
        return (n & (n - 1)) == 0; 
        
    }
};

int main(){
    int n;
    cout<<"Enter a number: ";
    cin >> n;
    Solution sol;
    cout<<"Is "<<n<<" a power of 2? ";
    cout << sol.isPowerOfTwo(n) << endl;
    return 0;
}