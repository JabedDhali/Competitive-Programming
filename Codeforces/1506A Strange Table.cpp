#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll tc, n, m, x, c, r, res;
    cin>>tc;
    while(tc--){
        cin>>n>>m>>x;
        c = (x-1)/n, r = (x-1)%n;
        res = r*m + c+1;
        cout<<res<<endl;
    }
    
    return 0;
}
