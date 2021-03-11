#include<bits/stdc++.h>
#define PI acos(-1.0)
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int tc, r1, r2, h, p;
    double rp, temp, x, res;
    cin>>tc;
    for(int cs = 1; cs<=tc; cs++){
        cin>>r1>>r2>>h>>p;
        rp = (p*(r1-r2))/(double)h + r2;
        res = (PI*(rp*rp + r2*r2 + rp*r2) * p) / 3.0;
        /// volume = 1/3 * PI * (rp^2 + r2^2 + rp*r2) * p
        cout<<"Case "<<cs<<": "<<fixed<<setprecision(8)<<res<<endl;
    }
    
    return 0;
}
