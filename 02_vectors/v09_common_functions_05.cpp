#include<bits/stdc++.h>
using namespace std;

void printList(vector<string> list, string caption) {
    cout << caption;
    cout << "{ ";
    for(int i = 0; i < list.size(); i++) {
        cout << list.at(i) << ", ";
    }
    cout << "}" << endl;
}


int main() {
    vector<string> w({"hello", "run", "fast", "school"});
    printList(w, "Some words (original):  ");

    // Inserting "university" at index-2
    w.insert(w.begin() + 2,"university");
    printList(w, "Some words (modified):  ");

    // Inserting multiple copies of given value at specified index
    w.insert(w.begin() + 2, 3, "happy");
    printList(w, "Some words (modified):  ");

    vector<string> temp({"apple", "banana", "kiwi", "mango"});
    // Inserting the range of elements at the given index
    w.insert(w.begin() + 3, temp.begin(), temp.end());
    printList(w, "Some words (modified):  ");


    return 0;
}