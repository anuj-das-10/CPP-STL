// 5. Given a vector of integers, write a function to remove 
//    all duplicate elements from the vector and return the updated vector.

#include<bits/stdc++.h>
using namespace std;

void print(vector<int> list, string caption) {
    cout << caption;
    for(int x: list) {
        cout << x << ", ";
    }
    cout << endl;
} 

// Sorting + One Pass
vector<int> removeDuplicates(vector<int> arr) {
    if(arr.empty()) return {};
    sort(arr.begin(), arr.end());
    vector<int> seen;
    seen.emplace_back(arr[0]);

    for(int i = 1; i < arr.size(); i++) {
        if(seen.back() != arr.at(i)) {
            seen.emplace_back(arr.at(i));
        }
    }

    return seen;
}

int main() {
    vector<int> v{1, 2, 3, 3, 1, 1, 2, 5, 2};
    print(v, "vector<int> v = ");
    vector<int> r = removeDuplicates(v);
    print(r, "vector<int> r = ");
    return 0;
}