#include<bits/stdc++.h>
using namespace std;

void print_pq(priority_queue<int, vector<int>, greater<int>> pq) {
    while(!pq.empty()) {
        cout << pq.top() << ", ";    
        pq.pop(); 
    }
    cout << endl;
}


int main() {
    priority_queue<int, vector<int>, greater<int>> pq;  // Smaller integer has more priority 
    pq.push(10);
    pq.push(5);
    pq.push(30);
    pq.emplace(3);
    pq.emplace(20);
    print_pq(pq);
    return 0;
}