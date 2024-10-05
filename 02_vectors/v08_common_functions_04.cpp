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

void printList(vector<int> list, string caption) {
    cout << caption;
    cout << "{ ";
    for(int i = 0; i < list.size(); i++) {
        cout << list.at(i) << ", ";
    }
    cout << "}" << endl;
}


int main() {
    vector<string> names({"Anuj", "Pragati", "John"});
    printList(names, "Original list:  ");
    // Re-assigning the values of vector by replacing the old ones
    names.assign({"MS Dhoni", "Virat Kohli", "Suresh Raina"});
    printList(names, "Modified list:  ");
    names.clear();

    printList(names, "\nAfter Running names.clear():  ");

    vector<string> veg;
    // Appending values one by one!
    veg.push_back("potato");
    veg.push_back("pumpkin");
    veg.emplace_back("tomato");
    veg.emplace_back("carrot");

    printList(veg, "\nVeggies list:  ");

    // Removing the last value!
    veg.pop_back();
    printList(veg, "Modified Veggies:  ");



    vector<int> even({2, 4, 6, 8, 10, 12, 14, 16, 18, 20});
    printList(even, "\nEven numbers(original):  ");
    // Removing the element at index-4
    even.erase(even.begin() + 4);
    printList(even, "\nEven numbers(modified):  ");

    // Removing all the elements from index-2 (inclusive) to index-6 (exclusive)
    even.erase(even.begin() + 2, even.begin() + 6);
    printList(even, "\nEven numbers(modified):  ");



    return 0;
}