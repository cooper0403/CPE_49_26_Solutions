#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int i = 1;i<=t;i++){
		int a,b,ans=0;
		cin >> a >> b;
		a|=1;
		while(a<=b){
			ans+=a;
			a+=2;
		}
		cout << "Case " << i << ": " << ans <<"\n";
	}
}