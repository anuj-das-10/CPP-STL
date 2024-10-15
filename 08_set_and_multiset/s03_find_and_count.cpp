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

    set<int>::iterator it = s.find(3);
    cout << *it << endl;

    // It will return value similar to s.end(); 
    // As 80 is not present in the set.
    set<int>::iterator itr = s.find(8); 
    cout << *itr << endl;

    // If element is present it returns 1 else 0;
    cout << s.count(2) << endl;

    return 0;
}