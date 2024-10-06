// 8. Given a vector of integers, write a function to find the  
//    length of the longest consecutive elements subsequence 
//    (elements must be consecutive and appear in increasing order).

#include<bits/stdc++.h>
using namespace std;

void print(string caption, vector<int> vec) {
    cout << caption;
    for(int x : vec) {
        cout << x << ", ";
    }
    cout << endl;
}

// Brute force Solution: O(nlogn)
int subsequence_length(vector<int> v) {
    if(v.empty()) return 0;         // edge case: empty vector
    sort(v.begin(), v.end());
    
    int len = 1;                    // tracks current subsequence length
    int max_len = 1;                // tracks max subsequence length

    for (int i = 1; i < v.size(); i++) {
        if(v[i] == v[i-1]) continue;               // skip duplicates
        else if(v[i] - v[i-1] == 1) len++;
        else {
            max_len = max(max_len, len);
            len = 1;  
        }
    }

    max_len = max(max_len, len);
    return max_len;
}

int main() {
    vector<int> seq{1, 2, 2, 3, 6, 10, 12, 7, 23, 5, 4};   
    print("Sequence:  ", seq);
    cout << "Length of longest sub-sequence:  " << subsequence_length(seq) << endl;
    return 0;
}