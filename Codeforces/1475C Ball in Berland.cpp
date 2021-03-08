#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll tc, boys, girls, couples;
    ll x, temp, res;
    vector<pair<ll, ll> >vc(200005);
    map<ll, ll>boyenter, girlenter;

    cin>>tc;
    while(tc--){
        cin>>boys>>girls>>couples;
        vc.clear(), boyenter.clear(), girlenter.clear();
        for(int i=0, b; i<couples; i++)
            cin>>vc[i].ff, boyenter[vc[i].ff]++;
        for(int i=0, g; i<couples; i++)
            cin>>vc[i].ss, girlenter[vc[i].ss]++;
        res = 0;
        for(int i=0; i<couples; i++)
            res += couples - (boyenter[vc[i].ff]+girlenter[vc[i].ss]-1);
        res /= 2; /// here two couples are choosed in one way
        cout<<res<<endl;
    }

    return 0;
}
