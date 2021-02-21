#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll tc, n, temp, res;
    map<ll, bool>mp;

    for(ll i=1; i<=10005; i++) mp[i*i*i] = 1;
    cin>>tc;
    while(tc--){
        cin>>n;
        res = 0;
        for(ll i=1; i*i*i<n && !res; i++)
            if(mp[i*i*i] && mp[n-i*i*i]) res=1;
        if(!res) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
