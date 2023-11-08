// Link to problem :
// https://www.codingninjas.com/studio/problems/maximum-frequency-number_920319?count=25&page=2&search=&difficulty%5B%5D=Easy&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM

#include <iostream>
#include <vector>
#include <climits>

#include <unordered_map>
using namespace std;

int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map<int, pair<int, int>> freq;
    for (int i = 0; i < n; ++i) {
        if (freq.find(arr[i]) == freq.end()) {
            freq[arr[i]] = make_pair(1, i);
        } else {
            freq[arr[i]].first++;
        }
    }
    int max_freq = INT_MIN, res = -1;
    for (auto &it : freq) {
        if (max_freq < it.second.first) {
            max_freq = it.second.first;
            res = it.first;
        } else if (max_freq == it.second.first && freq[res].second > it.second.second) {
            res = it.first;
        }
    }
    
    return res;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout<<"Maximum frequency number: ";
    cout << maximumFrequency(arr, n) << endl;
    return 0;
}