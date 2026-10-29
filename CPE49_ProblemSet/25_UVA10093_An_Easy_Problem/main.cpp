#include <bits/stdc++.h>
using namespace std;
int main() {
	string str;
	unordered_map <char, int> um;
	for (int i = 1; i < 10; i++)um[i ^ 48] = i;
	for (int i = 0; i < 26; i++)um['A' + i] = i + 10;
	for (int i = 0; i < 26; i++)um['a' + i] = i + 36;
	while (cin >> str) {
		int base = 2;
		for (auto& it : str)base = max(um[it] + 1, base);
		vector<int> vec(63 - base);
		for (int i = 0; i < str.size(); i++) {
			for (int j = 0; j + base < 63; j++) {
				vec[j] = (vec[j] * (base + j) + um[str[i]]) % (base + j - 1);
			}
		}
		for (int i = 0; i < vec.size(); i++) {
			if (vec[i] == 0) {
				cout << i + base << "\n";
				break;
			}
			if (i == vec.size() - 1)cout << "such number is impossible!\n";
		}
	}
}