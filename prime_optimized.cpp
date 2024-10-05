#include<iostream>
using namespace std;


// Inefficient --> O(n/2)
void prime_check1(int x) {
	bool is_prime = true;
	if(x < 2) {
		is_prime = false;
	} else {
		for(int i = 2; i < (int) x/2; i++) {
			if(x % i == 0) {
				is_prime = false;
				break;
			}
		}
	}

	is_prime ? cout << "true\n" : cout << "false\n";
}

// Much faster --> O(sqrt(n))
void prime_check2(int x) {
	int cnt = 0;
	for(int i = 1; (i*i) <= x; i++) {
		if(x % i == 0) {
			cnt++;
			if((x/i) != i) cnt++;
		}
	}
	cnt == 2 ? cout << "true\n" : cout << "false\n";
}



int main() {
	int x;
	cin >> x;
	prime_check1(x);
	prime_check2(x);
	return 0;
}