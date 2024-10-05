#include<bits/stdc++.h>
using namespace std;

void printList(vector<int> list, string caption) {
    cout << caption;
    cout << "{ ";
    for(int i = 0; i < list.size(); i++) {
        cout << list.at(i) << ", ";
    }
    cout << "}" << endl;
}

int main() {
    vector<int> x({1, 2, 3, 4, 5});
    vector<int> y({9, 8, 7, 6});

    cout << "\nBefore swapping: " << endl;
    printList(x, "x =  ");
    printList(y, "y =  ");

    cout << "\nAfter  swapping: " << endl;
    x.swap(y);

    printList(x, "x =  ");
    printList(y, "y =  ");

    return 0;
}