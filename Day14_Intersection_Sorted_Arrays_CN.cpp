// Link to problem :
// https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149?leftPanelTab=0&count=25&page=2&search=&sort_entity=order&sort_order=ASC&attempt_status=COMPLETED


#include <bits/stdc++.h> 
#include <vector>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	 vector<int> result;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            result.push_back(arr1[i]);
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }
    return result;
}

int main(){
    int n;
    cout << "Enter the size of the first array: ";
    cin >> n;   
    vector<int> arr1(n);
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    int m;
    cout << "Enter the size of the second array: ";
    cin >> m;
    vector<int> arr2(m);
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    vector<int> result = findArrayIntersection(arr1, n, arr2, m);
    cout << "The intersection of the two arrays is: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
}