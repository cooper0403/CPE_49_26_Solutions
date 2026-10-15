#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,sum,d ; //sum = 和 d = 差
	cin >> t;
	while(cin >> sum >> d){
		if(d>sum||(sum-d)/2 +d +(sum-d)/2 != sum){
			cout << "impossible\n";
		}
		else {
			cout << (sum-d)/2 +d <<" "<< (sum-d)/2 <<"\n";
		}
	}
}