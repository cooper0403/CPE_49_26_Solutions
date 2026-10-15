#include <bits/stdc++.h>
using namespace std;
int main(){
	long long m,d;//m =baseMember d = day
	while(cin >> m >> d){
		while(d>0){
			d-=m;
			m++;
		}
		cout << m-1 << "\n";
	}
}