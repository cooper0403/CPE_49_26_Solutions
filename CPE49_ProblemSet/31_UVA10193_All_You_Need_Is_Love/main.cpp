#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int main(){
    int t,cas=0;
    cin >> t;
    while(t--){
        string S,L;
        cin >> S >> L;
        int  s=stoi(S, nullptr, 2),l=stoi(L, nullptr, 2);
        if(gcd(s,l)>1)cout <<"Pair #" << ++cas << ":" << " All you need is love!\n";
        else cout <<"Pair #" << ++cas << ":" << " Love is not all you need!\n";
    }
}