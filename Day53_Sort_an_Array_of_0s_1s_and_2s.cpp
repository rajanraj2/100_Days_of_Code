// Link to problem :
// https://www.codingninjas.com/studio/problems/sort-an-array-of-0s-1s-and-2s_892977?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
#include <vector>
using namespace std;

void sortArray(vector<int>& arr, int n)
{
    int low = 0;
    int high = n - 1;
    int mid = 0;

    while (mid <= high)
    {
        switch (arr[mid])
        {
            case 0:
                swap(arr[low], arr[mid]);
                low++;
                mid++;
                break;

            case 1:
                mid++;
                break;

            case 2:
                swap(arr[mid], arr[high]);
                high--;
                break;
        }
    }
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sortArray(arr, n);
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}