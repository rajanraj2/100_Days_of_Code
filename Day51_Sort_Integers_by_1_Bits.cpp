// Link to problem 
// https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        auto customSort = [](int a, int b) {
            int countA = __builtin_popcount(a);
            int countB = __builtin_popcount(b);

            if (countA == countB) {
                return a < b;
            }
            return countA < countB;
        };
        sort(arr.begin(), arr.end(), customSort);
        return arr;
    }
};

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    Solution sol;
    vector<int> result = sol.sortByBits(arr);
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}