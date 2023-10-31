// Link to problem :
// https://leetcode.com/problems/maximum-69-number/description/

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
        string numStr = to_string(num);

        for (char &digit : numStr) {
            if (digit == '6') {
                digit = '9';
                break;  
            }
        }
        return stoi(numStr);  
    }
};

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    Solution obj;
    cout<<"The maximum 69 number is: "<<obj.maximum69Number(num)<<endl;
    return 0;
}