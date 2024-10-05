// 2. Given a vector of integers, write a function to count 
//    how many numbers are even and how many are odd.

#include<bits/stdc++.h>
using namespace std;

vector<int> countOddEven(vector<int> list) {
    vector<int> cnt;
    int odd = 0, even = 0;

    for(int x : list) {
        if(x % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    cnt.push_back(even);
    cnt.push_back(odd);
    return cnt;
}

int main() {
    vector<int> integers = {12, 34, 23, 65, 21, 44, 26, 64, 26, 53};
    for(int x : integers) {
        cout << x << ", ";
    }
    cout << endl;

    vector<int> res = countOddEven(integers);
    cout << "Even: " << res[0] << endl << "Odd : " << res[1] << endl; 
    return 0;
}