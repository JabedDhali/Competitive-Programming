#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll BigMod(ll a, ll b)
{
    if(b==0) return 1%mod;
    ll x = BigMod(a, b/2);
    x = (x*x)%mod;
    if(b%2) x = (x*a)%mod;
    return x;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll  n, temp, odd, even ;
    ll oddset=0, evenset=0, res;
    cin>>n;
    odd = even = 0;
    for(ll i=0; i<n; i++){
        cin>>temp;
        if(temp%2) odd++;
        else even++;
    }
    evenset = BigMod(2, even) - 1;//All are granted except empty
    if(odd>0) oddset = BigMod(2, odd-1) - 1;//Subset of even elements are granted
    res = (evenset + oddset + evenset*oddset)%mod;

    cout<<res<<endl;

    return 0;
}
