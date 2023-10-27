// Link to problem :
// https://leetcode.com/problems/fibonacci-number/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n <= 1) {
            return n;
        } else {
            return fib(n - 1) + fib(n - 2);
        }
    }
};

int main(){
    int n;
    cout<<"Enter the number: ";
    cin >> n;
    Solution sol;
    cout << sol.fib(n) << endl;
    return 0;
}