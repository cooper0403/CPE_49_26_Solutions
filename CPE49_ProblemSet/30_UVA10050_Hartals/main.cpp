#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,p;
        cin >> n;
        cin >> p;
        vector<int> day(n);
        while(p--){
            int it;
            cin >> it;
            for(int i=it-1;i<day.size();i+=it){
                if(i%7!=5 &&i%7!=6)day[i]++;
            }
        }
        int ans=0;
        for(auto it :day)if(it)ans++;
        cout << ans << "\n";
    }
}