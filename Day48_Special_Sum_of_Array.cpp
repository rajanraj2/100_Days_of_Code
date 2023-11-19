// Link to problem :
// https://www.codingninjas.com/studio/problems/special-sum-of-array_893340?leftPanelTabValue=PROBLEM&count=25&search=&difficulty%5B%5D=Easy&sort_entity=order&sort_order=ASC

#include <bits/stdc++.h> 
using namespace std;

int specialSum(vector<int>& arr, int n){
    int sum = accumulate(arr.begin(), arr.end(), 0);

    while (sum >= 10) {
        int temp = sum;
        sum = 0;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
    }

    return sum;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<specialSum(arr, n);
    return 0;
}