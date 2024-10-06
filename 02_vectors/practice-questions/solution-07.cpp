// 7. Write a function to rotate a vector to the right by k positions. 
//    For example, rotating {1, 2, 3, 4, 5} by 2 positions would result in {4, 5, 1, 2, 3}.

#include<bits/stdc++.h>
using namespace std;

void print(string caption, vector<int> vec) {
    cout << caption;
    for(int x : vec) {
        cout << x << ", ";
    }
    cout << endl;
}

// brute force solution using extra space
void rotate_vector1(vector<int> &v, int k) {
    vector<int> temp;
    for(int i = v.size() - k; i < v.size(); i++) {
        temp.emplace_back(v[i]);
    }

    for(int i = 0; i < v.size() - k; i++) {
        temp.emplace_back(v[i]);
    }

    v = temp;
}


void rotate_vector2(vector<int> &v, int k) {
    int n = v.size();
    
    // Ensure k is within the range [0, n-1]
    k = k % n;
    
    // Step 1: Reverse the entire vector
    reverse(v.begin(), v.end());
    
    // Step 2: Reverse the first k elements
    reverse(v.begin(), v.begin() + k);
    
    // Step 3: Reverse the remaining n-k elements
    reverse(v.begin() + k, v.end());
}


int main() {
    vector<int> v{1, 2, 3, 4, 5};
    vector<int> w{1, 2, 3, 4, 5};
    int k;
    cout << "k >> "; cin >> k;

    print("Original: v = ", v);
    rotate_vector1(v, k);
    print("Modified: v = ", v);

    print("Original: v = ", w);
    rotate_vector2(w, k);
    print("Modified: v = ", w);

    return 0;
}