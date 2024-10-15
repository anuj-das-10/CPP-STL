#include<bits/stdc++.h>
using namespace std;

void print(set<int> st) {
    cout << "Set: ";
    for(int n : st) {
        cout << n << " ";
    }
    cout << endl;
}

int main() {
    set<int> s;
    s.insert(10);
    s.insert(30);
    s.insert(30);
    s.insert(30);
    s.insert(50);
    s.emplace(20);
    s.emplace(40);

    print(s);

    s.erase(20);
    print(s);

    // Nothing will happen as 80 is not present in the set.
    s.erase(80);
    print(s);

    // Range [Remove all elements from lower bound to upper bound - 1]
    s.erase(s.find(10), s.find(40));
    print(s);

    return 0;
}