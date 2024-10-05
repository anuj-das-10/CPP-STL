// 4. Write a function that returns the maximum and minimum elements 
//    of a vector without using in-built max_element() or min_element().

#include<bits/stdc++.h>
using namespace std;

void print(vector<int> list, string caption) {
    cout << caption;
    for(int x: list) {
        cout << x << ", ";
    }
    cout << endl;
}

int max_value(vector<int> list) {
    int max = list[0];
    for(int x : list) {
        if(x > max) {
            max = x;
        }
    }
    return max;
}

int min_value(vector<int> list) {
    int min = list[0];
    for(int x : list) {
        if(x < min) {
            min = x;
        }
    }
    return min;
}


int main() {
    vector<int> nums{12, 34, 23, 65, 21, 10, 26, 64, 26, 53};
    print(nums, "List of numbers:  ");
    cout << "Max Value:  " << max_value(nums) << endl;
    cout << "Min Value:  " << min_value(nums) << endl;
    return 0;
}