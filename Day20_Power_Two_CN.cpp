// Link to problem :
// https://www.codingninjas.com/studio/problems/power-of-two_893061?leftPanelTab=0

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{	
    if (n <= 0) {
        return false; 
    }
    return (n & (n - 1)) == 0;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin >> n;
    cout<<"Is "<<n<<" a power of 2? ";
    cout << isPowerOfTwo(n) << endl;
    return 0;
}