// Link to problem :
// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        int m = grid.size();
        int n = grid[0].size();
        
        int row = 0;
        int col = n - 1;
        
        while (row < m && col >= 0) {
            if (grid[row][col] < 0) {
                count += (m - row);
                col--;
            } else {
                row++;
            }
        }
        return count;
    }
};

int main(){
    int m, n;
    cout << "Enter the number of rows: ";
    cin>>m;
    cout << "Enter the number of columns: ";
    cin>>n;
    vector<vector<int>> grid(m, vector<int>(n));
    cout << "Enter the elements of the grid: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>grid[i][j];
        }
    }
    Solution obj;
    cout<<obj.countNegatives(grid);
    return 0;
}