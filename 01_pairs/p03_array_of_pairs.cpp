#include<bits/stdc++.h>
using namespace std;

int main() {
    pair<int, int> pa[] = {
        {1,2},
		{3,4},
		{5,6},
		{7,8},
		{9,10}
    };

    for(auto x : pa) {
		cout << "(" << x.first << ", " << x.second << ")" << endl;  
	}

    return 0;
}