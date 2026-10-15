#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	bool f=0;
	while(getline(cin,str)){
		for(auto &it :str){
		 	if(it=='"'){
		 		if(f){
		 			cout <<"'"<<"'";
		 		}
		 		else{
		 			printf("``");
		 		}
		 		f^=1;
		 	}
		 	else cout << it;
		}
		cout << "\n";
	}
}