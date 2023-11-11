// Link to problem :
// https://www.codingninjas.com/studio/problems/leaders-in-an-array_873144?count=25&page=1&search=&difficulty%5B%5D=Easy&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
using namespace std;

vector<int> findLeaders(vector<int> &elements, int n) {
    vector<int> leaders;

    int maxRight = elements[n - 1];
    leaders.push_back(maxRight);

    for (int i = n - 2; i >= 0; --i) {
        if (elements[i] > maxRight) {
            maxRight = elements[i];
            leaders.push_back(maxRight);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin >> n;
    vector<int> elements(n);
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>elements[i];
    }
    vector<int> leaders = findLeaders(elements, n);
    cout<<"The leaders in the array are: ";
    for (int leader : leaders) {
        cout << leader << " ";
    }
    cout << endl;
    return 0;
}