#include <bits/stdc++.h>
using namespace std;
int main(){
	string stra,strb;
	while(cin >> stra){
		cin >> strb;//input
		if(stra.size()==1 && strb.size()==1 &&stra[0]=='0'&&strb[0]=='0')break;
		int ans=0,carr=0;
		for(int i = stra.size()-1,j=strb.size()-1;((i >= 0 || j >= 0) && carr )||(i >= 0 && j >= 0);i--,j--){
			int sum=0;
			if(i>=0)sum+=stra[i]^48;
			if(j>=0)sum+=strb[j]^48;
			sum+=carr;
			if(sum/10){
				carr=1;
				ans++;
			}
			else {
				carr=0;
			}
		}
		if(ans ==1){
			cout << "1 carry operation.\n";
		}
		else if(ans){
			cout << ans << " carry operations.\n";
		}
		else{
			cout << "No carry operation.\n";
		}
	}	
}
