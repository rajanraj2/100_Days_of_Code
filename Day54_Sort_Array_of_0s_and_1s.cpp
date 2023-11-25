// Link to problem :
// https://www.codingninjas.com/studio/problems/sort-array-of-0s-and-1s_2656186?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
using namespace std;

void sort0and1(int n, vector<int> &A){
    int left = 0;
    int right = n - 1;

    while (left < right) {
        while (A[left] == 0 && left < right) {
            left++;
        }
        while (A[right] == 1 && left < right) {
            right--;
        }
        swap(A[left], A[right]);
    }
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) cin >> A[i];
    sort0and1(n, A);
    for (int i = 0; i < n; ++i) cout << A[i] << " ";
    return 0;
}