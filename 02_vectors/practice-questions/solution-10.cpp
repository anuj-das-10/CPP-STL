// 10. Write a function that generates all possible subsequences 
//     of a given vector and prints them. A subsequence is a sequence 
//     derived from another sequence by deleting some or no elements 
//     without changing the order of the remaining elements.

#include<bits/stdc++.h>
using namespace std;

void print(string caption, vector<int> vec) {
    cout << caption;
    for(int x : vec) {
        cout << x << ", ";
    }
    cout << endl;
}

void generate_subseq(vector<int> &v, vector<int> &currentSubsequence, int index) {
    // Base case: If we've reached the end of the vector, print the current subsequence
    if (index == v.size()) {
        // Print the current subsequence
        cout << "[";
        for(int i = 0; i < currentSubsequence.size(); i++) {
            cout << currentSubsequence[i];
            if(i < currentSubsequence.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
        return;
    }

    // Recursive case 1: Include the current element in the subsequence
    currentSubsequence.push_back(v[index]);
    generate_subseq(v, currentSubsequence, index + 1);

    // Recursive case 2: Exclude the current element from the subsequence
    currentSubsequence.pop_back();      // Remove the last element
    generate_subseq(v, currentSubsequence, index + 1);
}

int main() {
    vector<int> seq = {1, 2, 3, 4};
    vector<int> curr_subseq;

    print("Sequence: ", seq);
    cout << "All sub-sequences: " << endl;
    generate_subseq(seq, curr_subseq, 0);
    return 0;
}