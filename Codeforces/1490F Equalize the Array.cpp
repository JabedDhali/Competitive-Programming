#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll tc, n, x, temp, res;
    map<ll, ll>mp, mmp;
    map<ll, ll>::iterator it;

    cin>>tc;
    while(tc--){
        cin>>n;
        mp.clear(), mmp.clear();
        for(int i=0; i<n; i++)
            cin>>x, mp[x]++, mmp[mp[x]]++;
        res = INT_MAX;
        for(it = mmp.begin(); it != mmp.end(); it++)
            res = min(res, n - it->second*it->first);
        cout<<res<<endl;
    }


    return 0;
}
