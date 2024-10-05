#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    
    // Inserting at index-2
    v.emplace(v.begin() + 2, 50);
    
    // It also returns an iterator that points to the newly inserted element.
    vector<int>::iterator itr = v.emplace(v.begin() + 3, 100);

    for(int x : v) {
        cout << x << "  ";
    }

    cout << endl << *itr;
    itr++;
    cout << endl << *itr;

    return 0;
}