#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int tc, n, p, q, temp, res;
    vector<int>weight;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++){
        cin>>n>>p>>q;
        weight.clear();
        for(int i=0, x; i<n; i++) 
            cin>>x, weight.push_back(x);
        res = temp = 0;
        for(int i=0; i<n && temp<q; i++)
            if(res<p && temp+weight[i]<=q) res++, temp+=weight[i];
        cout<<"Case "<<cs<<": "<<res<<endl;
    }
    return 0;
}
