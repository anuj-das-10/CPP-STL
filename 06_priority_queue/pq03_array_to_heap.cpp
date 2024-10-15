#include<bits/stdc++.h>
using namespace std;

void print_pq(priority_queue<int> pq) {
    while(!pq.empty()) {
        cout << pq.top() << ", ";    
        pq.pop(); 
    }
    cout << endl;
}

void print_pq(priority_queue<int, vector<int>, greater<int>> pq) {
    while(!pq.empty()) {
        cout << pq.top() << ", ";    
        pq.pop(); 
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 2, 4, 5, 10, 8, 14, 7};
    // Max Heap
    priority_queue<int> max_pq;
    for(int x : arr) {
        max_pq.push(x);
    }
    cout << "Max Heap: ";
    print_pq(max_pq);

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> min_pq;
    for(int x : arr) {
        min_pq.push(x);
    }
    cout << "Min Heap: ";
    print_pq(min_pq);

    return 0;
}