#include<bits/stdc++.h>
using namespace std;

void printList(vector<string> list) {
    for(int i = 0; i < list.size(); i++) {
        cout << i << ": " << list[i] << endl;
    }
    cout << endl;
} 

int main() {
    vector<string> fruits({"apple", "mango", "guava", "orange", "banana"});
    printList(fruits);
    cout << "Other functions: " << endl;

    // returns element at index 2
    cout << "fruits.at(2)   " << fruits.at(2) << endl;
    // returns first element
    cout << "fruits.front() " << fruits.front() << endl;    
    // returns last element
    cout << "fruits.back()  " << fruits.back() << endl;     

    return 0;
}