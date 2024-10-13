#include<bits/stdc++.h>
using namespace std;

void print(list<int> ls) {
    cout << "List:  ";
    for(int x : ls) {
        cout << x << ", ";
    }
    cout << endl;
}

void print(list<string> ls) {
    cout << "List:  ";
    for(string x : ls) {
        cout << x << ", ";
    }
    cout << endl;
}

int main() {
//  Initialization of list is excatly similar to vector. 
    list<int> ls1({5, 2, 8, 2, 1, 5, 3, 4});
    list<string> ls2(5, "Ha");
    list<int> ls3 = {10, 20, 50};

    print(ls1);
    print(ls2);
    print(ls3);

    return 0;
}