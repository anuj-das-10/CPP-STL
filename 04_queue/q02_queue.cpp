#include<bits/stdc++.h>
using namespace std;

void p(queue<int> q) {
    cout << "Queue:  ";
    while(!q.empty()) {
        cout << q.front() << ", ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> num;
    num.push(5);
    p(num);

    num.push(7);
    p(num);

    num.push(2);
    p(num);

    num.pop();
    p(num);

    num.emplace(9);
    p(num);
    
    num.emplace(3);
    p(num);

    cout << "The size of the queue is: " << num.size() << endl;

    return 0;
}