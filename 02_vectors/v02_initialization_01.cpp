//  Initialization using List

#include<bits/stdc++.h>
using namespace std;

int main() {
		// Initializing a vector with a List
		vector<string> names({"Anuj", "John", "Jane"});  
		vector<int> numbers = {1, 2, 3, 4, 5};

		for(string s : names) {
			cout << s << endl;
		}
		
		cout << endl;

		for(int n : numbers) {
			cout << n << "  ";
		}

		return 0;
}