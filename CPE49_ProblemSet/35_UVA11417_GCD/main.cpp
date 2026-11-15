#include <bits/stdc++.h>
using namespace std;
int gcd (int a,int b){return b? gcd(b,a%b):a;}
int main(){
    int n;
    while(cin >> n && n){
        int ans=0;
        for(int i = 1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                ans+=gcd(i,j);
            }
        }
        cout << ans << "\n";
    }
}