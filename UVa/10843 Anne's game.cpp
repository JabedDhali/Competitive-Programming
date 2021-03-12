#include<bits/stdc++.h>
#define ll long long
#define mod 2000000011
using namespace std;

ll BinPow(ll a, ll p)
{
    if(!p) return 1;
    ll x = BinPow(a, p/2);
    x = (x*x)%mod;
    if(p%2) x = (x*a)%mod;
    return x;
}

int main()
{
    ios::sync_with_stdio(0);
    
    ll tc, n, res;
    cin>>tc;
    for(ll cs=1; cs<=tc; cs++){
        cin>>n;
        if(n==1) res = 1;
        else res = BinPow(n, n-2);
        cout<<"Case #"<<cs<<": "<<res<<endl;
    }
    
    return 0;
}
