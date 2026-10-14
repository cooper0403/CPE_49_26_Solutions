#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
string line,a,b;
map <string,int> mp;
cin >> t;
while(t--){
cin >>line >> a>>b;
mp[line]++;	
}
for(auto it:mp)cout << it.first <<" "<<it.second<<"\n";
}