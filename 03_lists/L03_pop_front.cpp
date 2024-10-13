#include<bits/stdc++.h>
using namespace std;

void print(string cap, list<int> ls) {
    cout << cap;
    for(int x : ls) {
        cout << x << ", ";
    }
    cout << endl;
}

int main() {
    list<int> ls;
    ls.push_back(12);
    print("    push_back(12):  ",ls);

    ls.push_front(20);
    print("   push_front(20):  ",ls);

    ls.emplace_back(40);
    print(" emplace_back(40):  ",ls);

    ls.emplace_front(80);
    print("emplace_front(80):  ",ls);

    ls.sort();
    print("\nafter sorting  :  ",ls);
    
    ls.reverse();
    print("after reversing:  ",ls);

    ls.pop_back();
    print("\npop_back() :  ",ls);

    ls.pop_front();
    print("pop_front():  ",ls);

    return 0;
}