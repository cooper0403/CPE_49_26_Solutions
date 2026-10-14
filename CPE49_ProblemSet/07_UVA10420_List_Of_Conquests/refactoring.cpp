#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	string str;
	map <string,int> mp;
	cin >> t;
	getline(cin,str);//換行
	while(t--){
		getline(cin,str);//一次吃一行
		for(int i = 0;i<str.size();i++){
			if(str[i]==' '){
				str.erase(str.begin()+i,str.end());//清除第一個空白(包含)後的內容
				break;
			}
		}
		mp[str]++;
	}
	for(auto &it : mp){//輸出
		cout << it.first <<" "<< it.second << "\n";
	}
}