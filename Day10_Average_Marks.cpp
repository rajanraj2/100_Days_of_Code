// Link to problem :
// https://www.codingninjas.com/studio/problems/average-marks_893183

#include <bits/stdc++.h> 
#include <utility>
using namespace std;

pair<char, int> averageMarks(char firstLetterOfName, int m1, int m2, int m3) {
    
    int avg = (m1+m2+m3)/3;

    return make_pair(firstLetterOfName,avg);
}

int main(){
    char firstLetterOfName;
    int m1,m2,m3;
    cout<< "Enter the first letter of the name: ";
    cin >> firstLetterOfName;
    cout<< "Enter the marks of the three subjects: ";
    cin >> m1 >> m2 >> m3;
    pair<char, int> result = averageMarks(firstLetterOfName,m1,m2,m3);
    cout<< "The average marks of "<< result.first << " is: "<< result.second;
    return 0;
}