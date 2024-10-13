#include<bits/stdc++.h>
using namespace std;

void print(string caption, list<string> ls) {
    int i = 0;
    cout << caption;
    for(string s: ls) {
        cout << i++ << ": " << s << endl;
    }
    cout << endl;
}

int main() {
    list<string> f;
    f.push_back("mango");
    f.emplace_back("orange");
    print("Fruits basket: push_back() & emplace_back()\n", f);

    f.push_front("apple");
    print("Fruits basket: push_front(\"apple\")\n", f);
    
    f.emplace_front("banana");
    print("Fruits basket: emplace_front(\"banana\")\n", f);

    return 0;
}