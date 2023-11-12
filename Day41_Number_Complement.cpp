// Link to problem :
// https://leetcode.com/problems/number-complement/description/

#include <iostream>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        int numBits = 0;
        int temp = num;
        while (temp > 0) {
            temp >>= 1;
            numBits++;
        }
        long long bitmask = (1LL << numBits) - 1;

        return num ^ bitmask;
    }
};

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    Solution sol;
    cout<<"The complement of the number is: "<<sol.findComplement(num)<<endl;
    return 0;
}