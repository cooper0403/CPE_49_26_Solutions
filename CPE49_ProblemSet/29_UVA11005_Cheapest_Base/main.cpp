#include <bits/stdc++.h>
using namespace std;
int main(){
    int T,t=0;
    cin >> T;
    while(T--){
        cout << "Case " << ++t <<":\n";
        vector <int> cost(36);
        for(auto &it : cost){
            cin >> it;
        }
        int cas,num;
        cin >> cas;
        while(cas--){
            cin >> num;
            map <int,vector<int>> mp;
            for(int i = 2,number=num;i<37;i++,number=num){
                if(number==0)mp[cost[0]].push_back(i);
                else{
                    int baseCost=0;
                    while(number){
                        baseCost += cost[number%i];
                        number/=i;
                    }
                    mp[baseCost].push_back(i);
                }
            }
            cout << "Cheapest base(s) for number " << num << ":";
            for(auto &it :mp.begin()->second){
                cout << " "<< it ;
            }
            cout <<"\n";
        }
        if(T)cout <<"\n";
    }
}