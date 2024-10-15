#include<bits/stdc++.h>
using namespace std;

template <typename T> void print(multiset<T> mst) {
    cout << "Multiset: ";
    for(auto x : mst) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    multiset<int> ms;   // For Ascending order
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    ms.insert(3);
    ms.insert(4);

    print(ms);

    // It will remove all occurrences of 2.
    ms.erase(2);  
    print(ms);

    // It will remove first occurrence of 3. 
    ms.erase(ms.find(3));   
    print(ms);

    return 0;
}