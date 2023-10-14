// Link to problem :
// https://www.codingninjas.com/studio/problems/search-in-a-2d-matrix-ii_1089637?leftPanelTab=0

#include <iostream> 
#include <vector>
using namespace std;
bool findInMatrix(int x, vector<vector<int>> &arr)


{
    //    Write your code here.
    int row = arr.size();
    int col = arr[0].size();

    int rowIndex = 0;
    int colIndex = col-1;


        while (rowIndex<row && colIndex>=0){
            if (arr[rowIndex][colIndex]==x){
                return 1;
            }
            if (arr[rowIndex][colIndex]<x){
                rowIndex++;
            }
            else{
                colIndex--;
            }
        }
    return 0;
}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int m;
    cout<<"Enter the number of columns: ";
    cin>>m;
    vector<vector<int>> arr(n,vector<int>(m));   
    cout<<"Enter the elements of the matrix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int x;
    cout<<"Enter the target element: ";
    cin>>x;
    cout<<findInMatrix(x,arr);
    return 0;
}