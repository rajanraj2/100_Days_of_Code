#include <iostream>
#include <vector>
using namespace std;

int getPivot(vector<int>& arr, int n) {
    int s = 0;
    int e = n - 1;

    while (s < e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    return s;
}

int binarySearch(vector<int>& arr, int s, int e, int key) {
    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (key > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return -1;
}

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = getPivot(nums,n);
        if (target >= nums[pivot] && target <= nums[n - 1]) {
            return binarySearch(nums, pivot, n - 1, target);
        }
        else {
            return binarySearch(nums, 0, pivot - 1, target);
        }
        return -1;
    }
};

int main(){
    int n;
    cout<< "Enter the size of array: ";
    cin >> n;   
    vector<int> arr(n);
    cout<< "Enter the elements of array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cout<< "Enter the element to be searched: ";
    cin >> k;
    Solution s;
    cout << s.search(arr, k) << endl;
}
