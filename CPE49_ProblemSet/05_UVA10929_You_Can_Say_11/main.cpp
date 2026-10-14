#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	while(cin >> str){
		if(str=="0")break;
		cout << str ;
		for(int i = 0 ; i < str.size()-1;i++){
			str[i+1]=(((str[i]^48)*10+(str[i+1]^48)) %11)^48;
		}
		if(str.back() == '0'){
			cout << " is a multiple of 11.\n"; 
		}
		else{
			cout << " is not a multiple of 11.\n"; 	
		}
	}
}