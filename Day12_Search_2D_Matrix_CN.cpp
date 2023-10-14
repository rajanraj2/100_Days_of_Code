// Link to problem :
// https://www.codingninjas.com/studio/problems/search-in-a-2d-matrix_1082556?leftPanelTab=0

#include <iostream>
#include <vector>
using namespace std;

bool findInMatrix(int x, vector<vector<int>> &arr)
{
    //    Write your code here.
    int row = arr.size();
    int col = arr[0].size();

    int start = 0;
    int end = row*col - 1;

    while (start<=end){
        int mid = start+(end-start)/2;
        int element = arr[mid/col][mid%col];
        if (element==x){
            return 1;
        }
        if (element<x){
            start = mid+1;
        }else{
            end = mid-1;
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