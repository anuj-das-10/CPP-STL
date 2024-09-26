#include<bits/stdc++.h>
using namespace std;

int main() {
    pair<int, int> p = {1, 16};
    cout << "P(" << p.first << ", " << p.second << ")" << endl;

    // Nested Pairs
    pair<pair<int, int>, pair<int, int>> cord = {p, {5, 15}};
    cout << "Point: A(" << cord.first.first << "," << cord.first.second << ")" << endl;
    cout << "Point: B(" << cord.second.first << "," << cord.second.second << ")" << endl;
    double distance = sqrt(pow(cord.second.first - cord.first.first ,2) + pow(cord.second.second - cord.first.second ,2));
    cout << "Distance between A and B is " << distance << " sq. units." << endl;

    return 0;
}