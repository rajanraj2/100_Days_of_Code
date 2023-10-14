// Link to problem :
// https://leetcode.com/problems/search-a-2d-matrix-ii/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowIndex = 0;
        int colIndex = col-1;

        while (rowIndex<row && colIndex>=0){
            if (matrix[rowIndex][colIndex]==target){
                return 1;
            }
            if (matrix[rowIndex][colIndex]<target){
                rowIndex++;
            }
            else{
                colIndex--;
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