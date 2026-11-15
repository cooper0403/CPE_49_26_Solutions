#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    while(cin >> a >> b){
        vector <int> ans(1,a);
        while(a){
            if((a%b && a > 1 )||b==1){
                cout << "Boring!\n";
                break;
            }
            else {
                a/=b;
                ans.push_back(a);
            }
        }
        if(a == 0){
            cout << ans[0];
            for(int i = 1; i <ans.size()-1;i++){
                cout << " " << ans[i];
            }
            cout << "\n";
        }
    }
}