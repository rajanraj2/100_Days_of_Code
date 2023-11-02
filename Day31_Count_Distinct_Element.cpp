// Link to problem :
// https://www.codingninjas.com/studio/problems/count-distinct-element-in-every-k-size-window_920336?topList=striver-sde-sheet-problems&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
#include <vector>
using namespace std;

vector<int> countDistinctElements(vector<int> &arr, int k) 
{
	vector<int> result;
    unordered_map<int, int> freqMap; 
    int distinctCount = 0;

    for (int i = 0; i < k; i++) {
        if (freqMap[arr[i]] == 0) {
            distinctCount++;
        }
        freqMap[arr[i]]++;
    }
    result.push_back(distinctCount);

    for (int i = k; i < arr.size(); i++) {
        int leftIndex = i - k; 
        int leftElement = arr[leftIndex];
        int rightElement = arr[i];

        freqMap[leftElement]--;
        if (freqMap[leftElement] == 0) {
            distinctCount--;
        }

        if (freqMap[rightElement] == 0) {
            distinctCount++;
        }
        freqMap[rightElement]++;

        result.push_back(distinctCount);
    }

    return result;
}

int main(){
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;
    vector<int> result = countDistinctElements(arr, k);
    cout << "The distinct elements in every k size window are: ";
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}