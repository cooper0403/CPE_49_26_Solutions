#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n;
	vector<long long> vec(2, 1);
	for (int i = 1; vec.back() < 100000001; i++)vec.push_back(vec[i] + vec[i - 1]);
	cin >> n;
	while (cin >> n) {
		cout << n << " = ";
		for (int i = vec.size() - 1, f = 0; i; i--) {
			if (n >= vec[i]) {
				n -= vec[i];
				cout << "1";
				f = 1;
			}
			else if (f)cout << "0";
		}
		cout << " (fib)\n";
	}
}