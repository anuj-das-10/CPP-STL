#include<bits/stdc++.h>
using namespace std;

void print_pq(priority_queue<int> pq) {
    while(!pq.empty()) {
        cout << pq.top() << ", ";    
        pq.pop(); 
    }
    cout << endl;
}

int main() {
    priority_queue<int> pq;     // Greater integer has more priority 
    pq.push(10);
    pq.push(5);
    pq.emplace(3);
    pq.emplace(20);

    print_pq(pq);
    cout << pq.top();
    return 0;
}