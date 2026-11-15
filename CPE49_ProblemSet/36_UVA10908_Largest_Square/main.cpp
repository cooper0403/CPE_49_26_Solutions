#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int m,n,q;
		cin >> m >> n >> q;
		cout << m <<" "<< n <<" "<< q<<"\n";
		vector<vector<char>> vec(m+2,vector<char> (n+2,32));
		for(int i = 1;i<=m;i++){
			for(int j = 1;j<=n;j++){
				cin >> vec[i][j];
			}
		}
		while(q--){
			int C,R,a=0,b=0,c=0,d=0,state=15;
			cin >> R>>C;
			R++;
			C++;
			int ans=1;
			for(int i=1;state;i++){
				for(int j=-i;j<=i;j++){
                    if((state&1) && vec[R-i][C+j]!=vec[R][C])state &= 14;
                    if((state&2) && vec[R+i][C+j]!=vec[R][C])state &= 13;
                    if((state&4) && vec[R+j][C-i]!=vec[R][C])state &= 11;
                    if((state&8) && vec[R+j][C+i]!=vec[R][C])state &= 7;
                    }
				if(state&1) a=i;
				if(state&2) b=i;
				if(state&4) c=i;
				if(state&8) d=i;
            }
			cout<< 2*min({a,b,C,d})+1<<"\n";
		}
	}
}