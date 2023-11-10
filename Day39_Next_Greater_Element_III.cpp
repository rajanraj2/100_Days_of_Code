// Link to problem :
// https://www.codingninjas.com/studio/problems/bob-homework_2656187?count=25&page=1&search=&difficulty%5B%5D=Easy&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
using namespace std;

long long int bobsHomework(int n)
{
    vector<int> digits;
    while (n > 0) {
        digits.push_back(n % 10);
        n /= 10;
    }
    reverse(digits.begin(), digits.end());

    int i = digits.size() - 2;
    while (i >= 0 && digits[i] >= digits[i + 1]) {
        i--;
    }

    if (i == -1) {
        // No such permutation exists
        return -1;
    }

    int j = digits.size() - 1;
    while (digits[j] <= digits[i]) {
        j--;
    }

    swap(digits[i], digits[j]);
    reverse(digits.begin() + i + 1, digits.end());

    long long int result = 0;
    for (int digit : digits) {
        result = result * 10 + digit;
    }

    return result; 
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin >> n;
    cout<<"The next greater number is: ";
    cout << bobsHomework(n) << endl;
    return 0;
}