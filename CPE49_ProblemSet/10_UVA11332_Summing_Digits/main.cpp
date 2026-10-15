#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	while(cin >> str){
	if(str == "0")break;
		long long ans=0;
		for(auto & it : str){
			ans+=it^48;
		}
		while(ans>9){
			long long temp=0;
			while(ans){
				temp+=ans%10;
				ans/=10;
			}
			ans=temp;
		}
		cout << ans <<"\n";
	}
}