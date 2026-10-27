#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	vector <int> vec;
	for(int i = 1 ; i*i < 100001;i++){
		vec.push_back(i*i);
	}
	while (cin >> a >> b){
		if(a==b && a==0)break;
		cout << upper_bound(vec.begin(),vec.end(),b)-lower_bound(vec.begin(),vec.end(),a)<<"\n";
	}
}