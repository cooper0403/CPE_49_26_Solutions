#include <bits/stdc++.h>
using namespace std;
int con;
void fun(int n){
	if(n == 1)return;
	while(n!=1){
		con++;
		if(n&1) n=n*3+1;
		else n/=2;
	}
}
int main(){
	int l,r;
	while(cin >> l >> r){
		int ans=0;//lengthmax 
		cout << l << " " << r << " ";
		for (int i = min(l,r); i<=max(l,r);i++ ){
			con=1;
			fun(i);
			ans = max(ans,con);
		}
		cout << ans << "\n";
	}
}