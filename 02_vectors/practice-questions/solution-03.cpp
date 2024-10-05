// 3. Write a program to reverse the elements of a vector 
//    without using in-built functions like reverse().

#include<bits/stdc++.h>
using namespace std;

void print(vector<int> list, string caption) {
    cout << caption;
    for(int x: list) {
        cout << x << ", ";
    }
    cout << endl;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(vector<int> &list) {
    for(int i = 0, n = list.size(); i < (int)n/2; i++) {
        swap(list[i], list[n - 1 - i]);
    }
}


int main() {
    vector<int> v({2, 3, 5, 7, 9, 6});
    vector<int> temp;
    print(v, "vector<int> v =  ");
    for(int i = v.size() - 1; i >= 0; i--) {
        temp.push_back(v.at(i));
    }
    v = temp;
    print(v, "vector<int> v =  ");

    cout << v[1] << endl;
    v[1] = 0;
    cout << v[1] << endl;

    print(v, "vector<int> v =  ");
    reverse(v);
    print(v, "vector<int> v =  ");

    return 0;
}