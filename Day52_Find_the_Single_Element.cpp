// Link to problem :
// https://www.codingninjas.com/studio/problems/find-the-single-element_6680465?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int getSingleElement(vector<int> &arr){
	int result = 0;

    for (int num : arr) {
        result ^= num;
    }
    return result;
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << getSingleElement(arr) << endl;
    return 0;
}