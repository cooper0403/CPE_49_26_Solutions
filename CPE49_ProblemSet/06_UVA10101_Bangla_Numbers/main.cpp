#include <bits/stdc++.h>
using namespace std;
void fun(long long num){
    if(num >= 10000000){
        fun(num/10000000);
        cout << " kuti";
        num %= 10000000;
    }
    if(num >= 100000){
        cout << " " << num/100000 << " lakh";
        num %= 100000;
    }
    if(num >= 1000){
        cout << " " << num/1000 << " hajar";
        num %= 1000;
    }
    if(num >= 100){
        cout << " " << num/100 << " shata";
        num %= 100;
    }
    if(num > 0){
        cout << " " << num;
    }
}
int main(){
    long long num, cas = 0;
    while(cin >> num){
        cas++;
        cout << setw(4) << cas << ".";
        if(num == 0){
            cout << " 0";
        }
        else{
            fun(num);
        }
        cout << endl;
    }
}