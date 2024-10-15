#include<bits/stdc++.h>
using namespace std;

void print(stack<int> stk) {
    cout << "Stack: ";
    while(!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    print(s);
    cout << "Current stack top element:  " << s.top() << endl;

    s.pop();
    
    print(s);
    cout << "Current stack top element:  " << s.top() << endl;
    return 0;
}