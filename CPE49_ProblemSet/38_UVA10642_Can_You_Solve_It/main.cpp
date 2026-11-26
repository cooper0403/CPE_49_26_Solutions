#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,T=0;
    cin >> t;
    while(T++<t) {
        vector<int> vec(4);//x1 y1 x2 y2
        cin >> vec[0] >> vec[1] >> vec[2] >> vec[3];
        long long xy1=vec[0]+vec[1],xy2=vec[2]+vec[3];
        long long b=vec[0]+(xy1>>1)*xy1+(xy1&1)*(xy1>>1)+((xy1+1)>>1),e=vec[2]+(xy2>>1)*xy2+(xy2&1)*(xy2>>1)+((xy2 +1)>>1);
        cout << "Case " << T <<": "<< e - b<<"\n";
    }
}
// 5 4 3 2 1 =
// (5/2)*(5+1)+((5&1)*(5+1)/2)
//((vec[0]+vec[1])>>1)*(vec[0]+vec[1])+(((vec[0]+vec[1])&1)*(vec[0]+vec[1])>>1)