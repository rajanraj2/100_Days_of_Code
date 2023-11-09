// Link to problem :
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int removeDuplicates(vector<int>& nums) {
    int i = 0;
    for (int j = 1; j < nums.size(); j++) {
      if (nums[i] != nums[j]) {
        nums[++i] = nums[j];
        } 
      }
    return i + 1;
  }
};

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    Solution s;
    cout<<"Size of the array after removing duplicates: ";
    cout << s.removeDuplicates(arr) << endl;
    return 0;
}