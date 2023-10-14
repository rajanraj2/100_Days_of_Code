// Link to problem :
// https://leetcode.com/problems/search-a-2d-matrix/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int start = 0;
        int end = row*col - 1;

        while (start<=end){
            int mid = start+(end-start)/2;
            int element = matrix[mid/col][mid%col];
            if (element==target){
                 return 1;
            }
            if (element<target){
                 start = mid+1;
            }else{
                end = mid-1;
            }
        }
        return 0;
    }
};

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int m;
    cout<<"Enter the number of columns: ";
    cin>>m;
    vector<vector<int>> matrix(n,vector<int>(m));   
    cout<<"Enter the elements of the matrix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    int target;
    cout<<"Enter the target element: ";
    cin>>target;
    Solution obj;
    cout<<obj.searchMatrix(matrix,target);
    return 0;
}