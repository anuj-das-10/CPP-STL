#include<bits/stdc++.h>
using namespace std;


void pq(queue<int> q) {
    cout << "Queue:  ";
    while(!q.empty()) {
        cout << q.front() << ", ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> n;
    n.push(6);
    n.push(5);
    n.push(2);
    pq(n);
    n.pop();
    pq(n);

    return 0;
}