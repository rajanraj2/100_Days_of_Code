// Link to problem:
// https://leetcode.com/problems/climbing-stairs/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) {
        return n;
    }

    std::vector<int> dp(n + 1, 0);
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
    }
};


int main(){
    int n;
    cout<< "Enter the number of stairs: ";
    cin >> n;
    Solution sol;
    cout<< "The number of ways to climb the stairs is: "<< sol.climbStairs(n);
    return 0;
}