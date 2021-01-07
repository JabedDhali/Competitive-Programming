#include<bits/stdc++.h>
#define ll long long
using namespace std;

/*
    The problem can be solved using stars and bars theorem.
    C(n+k-1, k-1) = C(n-1, k-1)
*/
/*
    I am solving the problem using generatig function.
    G(x) = C(n-1, k-1) x^k
*/

ll C(ll n, ll k)
{
    if(k==0) return 1;
    if(k==n) return 1;
    if(k>n-k) k=n-k;
    ll res = 1;
    for(ll i=0; i<k; i++)
        res = (res*(n-i))/(i+1);
    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll tc, n, k, temp, res;
    cin>>tc;
    while(tc--){
        cin>>n>>k;
        res = C(n-1, k-1);
        cout<<res<<endl;
    }
    return 0;
}
