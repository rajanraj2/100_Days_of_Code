// Link to problem 
// https://leetcode.com/problems/find-the-duplicate-number/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int tortoise = nums[0];
        int hare = nums[0];

        do {
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        } while (tortoise != hare);

        tortoise = nums[0];
        while (tortoise != hare) {
            tortoise = nums[tortoise];
            hare = nums[hare];
        }

        return hare;
    }
};

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    Solution obj;
    cout<<"Duplicate number is: "<<obj.findDuplicate(arr)<<endl;
    return 0;
}