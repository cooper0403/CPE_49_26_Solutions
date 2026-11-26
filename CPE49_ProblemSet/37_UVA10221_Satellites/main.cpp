#include <bits/stdc++.h>
using namespace std;
double PI = asin(1)*2.0;
int main(){
    double a,b;
    string str;
    while(cin >> a >> b >>str){
        if(str[0]=='m')b/=60.0;
        a+=6440.0;
        if(b>180.0)b = 360.0 - b;
        b=b*PI/180.0;
        printf("%.6lf %.6lf\n",a*b,2.0*a*sin(b/2.0));
    }
}