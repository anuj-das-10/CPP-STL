//  Initialization from another vector

#include<bits/stdc++.h>
using namespace std;

int main() {
		vector<string> depts({"computer science", "physics", "statistics"});
		vector<string> university(depts);

		for(string s : university) {
			cout << s << endl;
		}

		return 0;
}