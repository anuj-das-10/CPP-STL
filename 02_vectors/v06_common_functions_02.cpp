#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<string> names({"Anuj", "Pragati", "Aditya", "Arkodyoti"});

    for(string s : names) {
        cout << s << endl;
    }

    int size = names.size();
    cout << "The size of the vector is:  " << size << endl;

    cout << "Empty status:  " << names.empty() << endl;
    if(names.empty()) {
        cout << "1 indicates true" << endl;
    }
    else {
        cout << "0 indicates false" << endl;
    }
    return 0;
}
