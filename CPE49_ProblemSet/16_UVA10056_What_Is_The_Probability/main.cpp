#include <bits/stdc++.h>
using namespace std;
int main(){
	string T;
	getline(cin,T);
	double C,ans,q,A,B;
	while(cin >> A >> C >> B){
		if(C!=0.0){
			q=1.0-C;//失敗概率
			ans= (pow(q,B-1)*C)/(1-pow(q,A));//公式
			cout << fixed << setprecision(4) << ans << "\n";
		}
		else{
			cout << "0.0000\n" ;
		}
	}
}