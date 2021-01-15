#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int C[1005][1005];

void CTable(ll n)
{
    for(ll i=0; i<=n; i++){
        for(ll j=0; j<=i; j++){
            if(!j || i==j) C[i][j] = 1;
            else C[i][j] = (C[i-1][j-1]+C[i-1][j])%mod;
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll tc, n, m, temp;
    cin>>tc;
    CTable(1000);
    
    while(tc--){
        cin>>n>>m;
        cout<<C[n+m][n]<<endl;
    }
    
    return 0;
}
