// Link to problem :
// https://leetcode.com/problems/sort-an-array/description/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortArray(std::vector<int>& nums) {
        int n = nums.size();
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(nums, n, i);
        }
        for (int i = n - 1; i > 0; i--) {
            swap(nums[0], nums[i]);
            heapify(nums, i, 0);
        }

        return nums;
    }

    void heapify(vector<int>& nums, int n, int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && nums[left] > nums[largest]) {
            largest = left;
        }

        if (right < n && nums[right] > nums[largest]) {
            largest = right;
        }

        if (largest != i) {
            swap(nums[i], nums[largest]);
            heapify(nums, n, largest);
        }
    }
};

int main(){
    Solution sol;
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;
    vector<int> nums(n);
    cout<< "Enter the elements of array: ";
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    vector<int> ans = sol.sortArray(nums);
    for (int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    return 0;
}