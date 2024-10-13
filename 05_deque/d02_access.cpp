#include<bits/stdc++.h>
using namespace std;

int main() {
    deque<string> names;
    int i = 0;
    names.push_back("anuj");
    names.push_front("pragati");
    names.push_back("aditya");
    names.push_back("kaustav");

    for(string s : names) {
        cout << i++ << ": " << s << endl;
    }

    cout << "The value at index-0: " << names[0] << endl;
    cout << "The value at index-1: " << names[1] << endl;

    return 0;
}