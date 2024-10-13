#include<bits/stdc++.h>
using namespace std;

void print(string op, deque<int> deq) {
    cout << "DE-Queue:  ";
    for(deque<int>::iterator it = deq.begin(); it != deq.end(); it++) {
        cout << *it << ", ";
    }
    cout << "   [" << op << "]" << endl << endl;
}


int main() {
    deque<int> n;
    n.push_back(10);
    print("push_back(10)" ,n);
    n.push_front(20);
    print("push_front(20)" ,n);

    n.push_back(60);
    n.push_back(70);
    print("push_back(60), push_back(70)" ,n);

    n.push_front(40);
    n.push_front(30);
    print("push_front(40), push_front(30)" ,n);

    n.pop_back();
    print("pop_back()" ,n);
    n.pop_front();
    print("pop_front()" ,n);

    return 0;
}