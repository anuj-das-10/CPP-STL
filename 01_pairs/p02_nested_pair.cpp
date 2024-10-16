#include<bits/stdc++.h>
using namespace std;

int main() {
    // Method - 1
    pair<int, pair<string, string>> p = {1 ,{"apple", "mango"}};
    cout<< "p: {" << p.first << ", (" << p.second.first << ", " << p.second.second << ")}" << endl;

    // Method - 2 
    pair<int, pair<string, string>> q;
    q.first = 2;
    q.second.first = "grapes";
    q.second.second = "guava";
    cout<< "q: {" << q.first << ", (" << q.second.first << ", " << q.second.second << ")}" << endl;

    // Method - 3
    pair<int, pair<string, string>> r;
    r.first = 3;
    r.second = {"pineapple", "papaya"};
    cout<< "r: {" << r.first << ", (" << r.second.first << ", " << r.second.second << ")}" << endl;

    // Method - 4
    pair<string, string> x = {"orange", "strawberry"};
    pair<int, pair<string, string>> s = {4, x};
    cout<< "s: {" << s.first << ", (" << s.second.first << ", " << s.second.second << ")}" << endl;
    

    return 0;
}