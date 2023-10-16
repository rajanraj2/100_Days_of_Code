// Link to problem :
// https://leetcode.com/problems/intersection-of-two-arrays/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> numSet(nums1.begin(), nums1.end());
        vector<int> result;
        
        for (const int num : nums2) {
            if (numSet.count(num)) {
                result.push_back(num);
                numSet.erase(num);
            }
        }
        return result;
    }
};

int main(){
    int n;
    cout << "Enter the size of the first array: ";
    cin >> n;   
    vector<int> arr1(n);
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    int m;
    cout << "Enter the size of the second array: ";
    cin >> m;
    vector<int> arr2(m);
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    Solution obj;
    vector<int> result = obj.intersection(arr1, arr2);
    cout << "The intersection of the two arrays is: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
}