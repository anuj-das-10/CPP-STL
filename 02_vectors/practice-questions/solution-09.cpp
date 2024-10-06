// 9. Write a function to find the majority element (the element that appears
//    more than n/2 times) in a vector. If no such element exists, return -1.

#include<bits/stdc++.h>
using namespace std;

void print(string caption, vector<int> vec) {
    cout << caption;
    for(int x : vec) {
        cout << x << ", ";
    }
    cout << endl;
}

int majority(vector<int> v) {
    if(v.empty()) return -1;
    int n = v.size();
    unordered_map<int, int> map;

    // directly increment the count with map[x]++, 
    // which will initialize the count to 0 if the key does not exist.
    for(int x : v) {
        map[x]++;
    }

    int maxValCnt = 0, maxVal = 0;
    for(pair p : map) {
        if(p.second > maxValCnt) {
            maxValCnt = p.second;
            maxVal = p.first;
        }
    }

    return maxValCnt > (int) n/2 ? maxVal : -1;
}

int main() {
    vector<int> nums = {1, 2, 3, 2, 4, 2, 2, 2, 5, 2};
    print("vector<int> nums: ", nums);
    cout << "majority element: " << majority(nums) << endl;
    return 0;
}