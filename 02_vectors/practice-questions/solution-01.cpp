// 1. Write a C++ function to compute the sum of all 
//    elements in a given vector of integers.

#include<bits/stdc++.h>
using namespace std;

int totalSum(vector<int> list) {
    int total = 0;
    for(int x : list) {
        total += x;
    }
    return total;
}

int main() {
    vector<int> n = {12, 32, 44, 65, 56, 22};
    for(int x : n) {
        cout << x << ", ";
    }
    cout << endl << "The sum of all elements:  " << totalSum(n);
    return 0;
}