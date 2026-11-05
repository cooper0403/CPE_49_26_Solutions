#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int number, b1 = 0, b2 = 0;
		cin >> number;
		for (int i = number; i; i >>= 1)b1 += i & 1;
		while (number > 0) {
			b2 += ((number % 10) & 1) + ((number % 10 >> 1) & 1) + ((number % 10 >> 2) & 1) + ((number % 10 >> 3) & 1);
			number /= 10;
		}
		cout << b1 << " " << b2 << "\n";
	}
}
