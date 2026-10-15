#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	vector <int> Mbase {31,59,90,120,151,181,212,243,273,304,334};
	vector <string> ans {"Saturday\n","Sunday\n","Monday\n","Tuesday\n","Wednesday\n","Thursday\n","Friday\n"};
	cin >> t;
	while(t--){
		int M,D;
		cin >> M >> D;
		if(M>1)D+=Mbase[M-2];
		cout << ans[(D-1)%7];
	}
}