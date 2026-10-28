#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,t=0;
	while(cin >> n){
		int is_b2=1;
		vector<int> vec(n+1);
		unordered_set <int> ust;
		for(int i = 1 ; i <= n ; i ++ ){//Note that 1 base
			cin >> vec[i];
			if(vec[i]<=vec[i-1])is_b2=0;
		}
		if(is_b2){
			for(int i = 1 ; i <= n && is_b2; i ++){
				for(int j = i ; j <=n; j++){
					if(ust.find(vec[i]+vec[j]) != ust.end()){
						is_b2=0;
						break;
					}
					else ust.insert(vec[i]+vec[j]);
				}
			}
		}
		if(is_b2)cout << "Case #" << ++t <<": It is a B2-Sequence.\n\n";
		else cout << "Case #" << ++t <<": It is not a B2-Sequence.\n\n";
	}
}