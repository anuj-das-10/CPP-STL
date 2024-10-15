#include<bits/stdc++.h>
using namespace std;

template<typename T>
void print(set<T> st) {
    cout << "Set: ";
    for(auto x : st) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    set<int> s = {1, 2, 2, 3, 4, 5};
    print(s);

    auto low_it = s.lower_bound(2);
    
    // Return iterator next to 4.
    auto up_it = s.upper_bound(4);

    cout << *low_it << endl;
    cout << *up_it << endl;
    
    up_it--;    // Decrementing iterator to reach 4.
    cout << *up_it << endl;

    return 0;
}