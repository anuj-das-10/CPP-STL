#include<bits/stdc++.h>
using namespace std;

void print1(map<int, string> map) {
    for(pair<int, string> p : map) {
        cout << p.first << ": " << p.second << endl;
    }
    cout << endl;
}

void print2(map<int, string> map) {
    for(int i = 0; i < map.size(); i++) {
        cout << i << ": " << map[i] << endl;
    }
    cout << endl;
}

int main() {
    map<int, string> mp;
    mp.insert({2, "Rust"});
    mp.insert({1, "GoLang"});
    mp[0] = "Java";
    mp[3] = "JavaScript";

    print1(mp);
    print2(mp);
    return 0;
}