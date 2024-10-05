#include<bits/stdc++.h>
using namespace std;

void printList1(vector<int> list) {
    for(vector<int>::iterator i = list.begin(); i != list.end(); i++) {
        cout << *i << "  ";
    }
    cout << endl;
}

void printList2(vector<int> list) {
    for(auto itr = list.begin(); itr != list.end(); itr++) {
        cout << *(itr) << "  ";
    }
    cout << endl;
}


void printList3(vector<int> list) {
    for(int x : list) {
        cout << x << "  ";
    }
    cout << endl;
}

int main() {
    vector<int> nums({1, 2, 4, 6, 8});
    vector<int>::iterator it = nums.begin();
    cout << *(it) << " ";
    cout << *(++it) << " ";
    cout << *(++it) << " ";
    cout << *(++it) << " ";
    cout << *(++it) << endl << endl;

    vector<int>::iterator itr = nums.end();
    cout << *(--itr) << " ";
    cout << *(--itr) << " ";
    cout << *(--itr) << " ";
    cout << *(--itr) << " ";
    cout << *(--itr) << endl;

    printList1(nums);
    printList2(nums);
    printList3(nums);
    return 0;
}