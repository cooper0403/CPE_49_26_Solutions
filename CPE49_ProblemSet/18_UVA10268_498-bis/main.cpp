#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void sol(int x ,vector<ll>& vec){
	ll ans=0,n=vec.size();
	for(int i = 0 ; i < vec.size()-1;i++){
		n--;
		ans = ans * x+n*vec[i];
	}
	cout << ans << "\n";
}
int main(){
	string str,t;
	while(getline(cin,str)){
		int x = stoi(str);
		getline(cin,str);
		stringstream ss;
		ss << str;
		vector<ll> vec;
		while(ss >> t){
			vec.push_back(stoi(t));
		}
		sol(x,vec);
	}

}