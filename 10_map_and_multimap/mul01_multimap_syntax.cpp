#include<bits/stdc++.h>
using namespace std;

void print(multimap<int, string> mmap) {
    multimap<int, string>::iterator itr;
    for( itr = mmap.begin(); itr != mmap.end(); ++itr) {
        cout << '\t' << itr->first << ": " << itr->second << endl;
    }
    cout << endl;
}

int main() {
    multimap<int, string> mmap{{1, "JavaScript"}, {1, "Python"}};
    mmap.insert({0, "Java"});
    mmap.insert({2, "C++"});
    mmap.insert({3, "GoLang"});
    mmap.insert({3, "Ruby"});
    print(mmap);

    // Remove all occurrences of values where key is 1.
    mmap.erase(1);
    print(mmap);

    // Remove first occurrence!
    mmap.erase(mmap.find(3));
    print(mmap);
    
    return 0;
}