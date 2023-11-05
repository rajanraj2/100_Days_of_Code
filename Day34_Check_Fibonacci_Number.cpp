#include <iostream>
using namespace std;

bool CheckFiboNum(int n)
{
    if (n < 2) {
        return n == 0 || n == 1;
    }

    int a = 0;
    int b = 1;

    while (b < n) {
        int next = a + b;
        a = b;
        b = next;
    }

    return b == n;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    bool result = CheckFiboNum(n);
    cout << "The result is: " << result << endl;
    return 0;
}