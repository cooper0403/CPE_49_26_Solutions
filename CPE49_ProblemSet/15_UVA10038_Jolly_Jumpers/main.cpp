#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	while (cin >> t){
		vector<int> vec(t),chack(t-1);
		bool ans=1;//true
		for(int i = 0 ; i < t;i++){
			cin >> vec[i];
			if(i){
				int temp=abs(vec[i]-vec[i-1])-1;
				if(temp>=0&&temp<t-1&&chack[temp]==0){
					chack[temp]=1;
				}
				else{
					ans=0;
				}
			}
		}
		if(ans)cout << "Jolly\n";
		else cout << "Not jolly\n";
	}
}