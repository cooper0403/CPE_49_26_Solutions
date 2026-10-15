#include <bits/stdc++.h>
using namespace std;
int main(){
string a,b;
while(getline(cin,a)){
getline(cin,b);
vector<int> ba(26),bb(26);
for(auto &it: a){
if(it-'a'>=0)ba[it-'a']++;
}
for(auto &it: b){
if(it-'a'>=0)bb[it-'a']++;
}
string ans = "a";
for(int i = 0 ; i <26;i++){
	for(int j = min(ba[i],bb[i]);j>0;j--){
		cout << ans;
	}
	ans[0]++;
}
cout <<"\n";
}
}
