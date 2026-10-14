#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	string line;
	getline(cin,line);//換行
	vector<int> cont(26);
	while(t--){
		getline(cin,line);
		for(auto &it : line){
			if(isalpha(it)){
				it = toupper(it);
				cont[it-'A']++;
			}
		}
	}
	map <int,string> mp;
	for(int i = 0 ; i < 26;i++){
		char ch = 'A'+i;
		if(cont[i])mp[cont[i]*-1].push_back(ch);//運用*-1來實現由大排到小之後再*-1還原
	}
	for(auto &it : mp){
		for(int i = 0 ; i < it.second.size();i++){
			cout <<it.second[i] << " "<< it.first*-1<<"\n";
		}
	}
}
//此版代碼為重構版
//瘋狂程設未知錯誤故無法測試 
//UVa OJ通過測試