#include <bits/stdc++.h>
using namespace std;
int main(){
	vector <string> strVec;
	size_t ms=0;//ms = maxSize
	string line;
	while(getline(cin,line)){
		strVec.push_back(line);
		ms=max(ms,line.size());
	}
	vector<string> ans(ms,string(strVec.size(),' '));
	for(int i = 0;i <strVec.size();i++){
		for(int j = 0; j < strVec[i].size();j++){
			ans[j][strVec.size()-i-1]=strVec[i][j];
		}
	}
	for(auto &it :ans){
		cout << it << "\n";
	}
}