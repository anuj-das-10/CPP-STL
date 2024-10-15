#include<bits/stdc++.h>
using namespace std;

template<typename T>
void print(multiset<T, greater<T>> mst) {
    cout << "Multiset: ";
    for(auto x : mst) {
        cout << x << " ";
    }
    cout << endl;
}

template <typename T> void printms(multiset<T> mst) {
    cout << "Multiset: ";
    for(auto x : mst) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    // multiset<int, greater<int>> ms; // For Descending order
    multiset<int> ms;                  // For Ascending order
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    ms.insert(3);
    ms.insert(4);

    printms(ms);

    return 0;
}