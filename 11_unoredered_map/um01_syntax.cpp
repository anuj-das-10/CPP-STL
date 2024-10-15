#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int, string> unordered_map) {
    for(auto p : unordered_map) {
        cout << p.first << ": " << p.second << endl;
    }
    cout << endl;
}

int main() {
    unordered_map<int, string> um{{1, "John"},{2, "Mary"}};
    um.insert({3, "Kunimitsu"});
    um.insert({4, "Sonia"});
    um[5] = "Anya";
    print(um);

    um.erase(4);
    print(um);

    um.erase(um.find(3));
    print(um);
    
    return 0;
}