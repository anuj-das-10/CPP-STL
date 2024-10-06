// 6. Given two sorted vectors, write a function to merge them 
//    into a single sorted vector without using any sorting functions.

#include<bits/stdc++.h>
using namespace std;

void print(string caption, vector<int> vec) {
    cout << caption;
    for(int x : vec) {
        cout << x << ", ";
    }
    cout << endl;
}

vector<int> merge(vector<int> vec1, vector<int> vec2) {
    int x = vec1.size(), y = vec2.size(), i = 0, j = 0;
    vector<int> res;
    
    while(i < x && j < y) {
        if(vec1[i] <= vec2[j]) {
            res.emplace_back(vec1[i++]);  
        } else {
            res.emplace_back(vec2[j++]);  
        }
    }

    // Merge remaining elements in case of unequal size of vector
    while(i < x) {
        res.emplace_back(vec1[i++]);
    }

    while(j < y) {
        res.emplace_back(vec2[j++]);
    }

    return res;
}

int main() {
    vector<int> vec1({1, 1, 2, 3, 5, 17});
    vector<int> vec2({2, 4, 6, 7, 9, 14});

    print("vector A = ", vec1);
    print("vector B = ", vec2);
    vector<int> result = merge(vec1, vec2);

    print("Resultant: ", result);
    return 0;
}