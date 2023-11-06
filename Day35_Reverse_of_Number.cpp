// Link to problem :
// https://www.codingninjas.com/studio/problems/reverse-of-a-number_624652?count=25&page=2&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM

#include<iostream>
using namespace std;

int main() {
	int N, reversedNumber = 0;
    cin >> N;

    while (N > 0) {
        int lastDigit = N % 10;

        if (lastDigit == 0 && reversedNumber == 0) {
            N /= 10;
            continue;
        }
        reversedNumber = (reversedNumber * 10) + lastDigit;
        N /= 10;
    }
    cout<<reversedNumber;
}
