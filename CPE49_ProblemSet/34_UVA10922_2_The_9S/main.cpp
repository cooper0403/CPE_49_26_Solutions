#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	while(cin >> str && str[0]^ 48){
		cout << str ;
		int ans=1;
		while(1){
			int sum=0;
			for(auto it : str)sum+=it^48;
			if(sum%9){
				ans=0;
				break;
			}
			ans++;
			if(sum==9)break;
			str=to_string(sum);
		}
		if(ans){
			cout<<" is a multiple of 9 and has 9-degree "<<--ans<<".\n";
		}
		else{
			cout<<" is not a multiple of 9.\n";
		}
	}
}