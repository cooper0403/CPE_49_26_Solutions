#include <bits/stdc++.h>
using namespace std;
int main() {
	long long I;
	while (cin >> I && I != 0) {
		cout << "The parity of ";
		int c = 0;
		string bin = "";
		while (I) {
			bin += (I & 1) ^ 48;
			c += I & 1;
			I >>= 1;
		}
		reverse(bin.begin(), bin.end());
		cout << bin << " is " << c << " (mod 2).\n";
	}
}