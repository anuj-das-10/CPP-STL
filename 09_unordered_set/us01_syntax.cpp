#include<bits/stdc++.h>
using namespace std;

template <typename T> void print(unordered_set<T> unorderedSet) {
    cout << "Unordered Set:  ";
    for(auto x: unorderedSet) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    unordered_set<int> us; 
    us.insert(12);
    us.insert(17);
    us.insert(21);
    us.insert(19);
    us.insert(32);

    print(us);
    us.erase(21);
    print(us);

    return 0;
}