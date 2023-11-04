// Link to problem :
// https://www.codingninjas.com/studio/problems/maximum-distance_758901?count=25&page=2&search=&difficulty%5B%5D=Easy&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
using namespace std;

int maximumDistance(int arr[], int n)
{
    unordered_map<int, int> lastIndex;
    int maxDist = 0;

    for (int i = 0; i < n; i++) {
        if (lastIndex.find(arr[i]) != lastIndex.end()) {
            int dist = i - lastIndex[arr[i]];
            maxDist = max(maxDist, dist);
        } else {
            lastIndex[arr[i]] = i;
        }
    }

    if (maxDist == 0) {
        return 0; 
    }

    return maxDist;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = maximumDistance(arr, n);
    cout << "The result is: " << result << endl;
    return 0;
}