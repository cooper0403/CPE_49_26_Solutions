#include <bits/stdc++.h>
using namespace std;
vector<int> prime;
vector<bool> isprime(1000007,1);
void euler(int n) {
    isprime[0]=isprime[1]=0;
    for (int i = 2; i <= n; i++) {
        if (isprime[i]) prime.push_back(i);
        for (int p : prime) {
            if (1LL * i * p > n) break;
            isprime[i * p] = false;
            if (i % p == 0) break;
        }
    }
}
int main(){
    euler(1000000);
    int num;
    while(cin >> num){
        cout << num;
        if(isprime[num]){
            string rnum=to_string(num);
            reverse(rnum.begin(),rnum.end());
            int Rnum=stoi(rnum);
            if(isprime[Rnum] &&Rnum !=num)cout << " is emirp.\n";
            else cout << " is prime.\n";
        }
        else {
            cout << " is not prime.\n";
        }
    }
}