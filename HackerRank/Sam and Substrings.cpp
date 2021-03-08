#include<bits/stdc++.h>
#define ll long long 
#define mod 1000000007
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    string str;
    ll n, res;
    cin>>str;
    n = str.size();
    ll num[n+5], sum[n+5];
    for(int i=0; i<n; i++) num[i] = str[i] - '0';
    res = sum[0] = num[0];
    for(int i=1; i<n; i++){
        sum[i] = ((i+1)*num[i] + sum[i-1]*10)%mod;
        res = (res + sum[i]) % mod;
    }
    cout<<res<<endl;
    return 0;
}
