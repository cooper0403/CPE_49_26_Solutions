#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; 
	cin >> t;//輸入幾筆測資
	while(t--){
		int n,ans=0;
		cin >> n;//輸入每筆測資中有個元素
		vector <int> vec(n);
		for(int i = 0 ; i < n;i++){
			cin >> vec[i]; 
		}//輸入元素進入vecotor
		sort(vec.begin(),vec.end());
		for(int i = 0 ; i < n;i++){
			ans+=abs(vec[i/2]-vec[i]);
		}
		cout << ans <<"\n";
	}
}