#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll tc, n, temp;
    vector<ll>vc, res;
    cin>>tc;
    while(tc--){
        cin>>n;
        vc.clear();
        for(ll i=0, x; i<n; i++)
            cin>>x, vc.push_back(x);
        for(int i=0; i<n/2; i++)
            cout<<vc[i]<<" "<<vc[n-i-1]<<" ";
        if(n%2) cout<<vc[n/2];
        cout<<endl;
    }

    return 0;
}
