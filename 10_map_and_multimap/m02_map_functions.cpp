#include<bits/stdc++.h>
using namespace std;

void print(map<int, string> map) {
    for(pair<int, string> p : map) {
        cout << p.first << ": " << p.second << endl;
    }
    cout << endl;
}

int main() {
    map<int, string> mp;
    mp.insert({2, "Rust"});
    mp.insert({1, "GoLang"});
    mp[0] = "Java";
    mp[3] = "JavaScript";

    print(mp);


    // It returns an iterator pointing to the element if the element exists
    auto it = mp.find(2);
    cout << (*it).second << endl;

    // It returns an iterator pointing to the end of the map, i.e., 
    // student.end() if the element doesn't exist.
    auto itr = mp.find(5);
    itr--;              // Going back to last element
    cout << (*itr).second << endl;

    return 0;
}