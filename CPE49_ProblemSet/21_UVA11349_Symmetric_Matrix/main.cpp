#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,coun=1;
	cin >> t;
	while(t--){
		string a ,b;
		int n,ans=1;
		cin >> a >> b >> n;
		vector< long long >vec((n*n+1)/2);
		for(int i = 0 ;i < ((n*n+1)/2 );i++){
			cin >> vec[i];
			if(vec[i]<0)ans = 0;
		}
		for(int i = ((n*n)/2 )-1 ;i>=0 ;i--){
			long long st;
			cin >> st;
			if(st^vec[i])ans = 0;
		}
		if(ans){
			cout << "Test #" << coun <<": Symmetric.\n";
		}
		else{
			cout << "Test #" << coun <<": Non-symmetric.\n";
		}
		coun++;
	}
}