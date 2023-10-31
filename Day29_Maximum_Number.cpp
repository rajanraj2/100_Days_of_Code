// Link to problem :
// https://www.codingninjas.com/studio/problems/maximum-number_1094876?leftPanelTab=0

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> maxSwap(vector<int> &num)
{
    int n = num.size();
    vector<int> result = num;

    for (int i = 0; i < n; i++) {
        int maxDigit = -1;
        int maxDigitIndex = -1;

        for (int j = i + 1; j < n; j++) {
            if (num[j] > num[i] && num[j] >= maxDigit) {
                maxDigit = num[j];
                maxDigitIndex = j;
            }
        }

        if (maxDigit != -1) {
            swap(result[i], result[maxDigitIndex]);
            break;
        }
    }
    return result;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> num(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    vector<int> result = maxSwap(num);
    cout << "The maximum number is: ";
    for (int i = 0; i < n; i++) {
        cout << result[i];
    }
    cout << endl;
    return 0;
}