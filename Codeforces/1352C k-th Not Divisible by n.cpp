#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll tc, n, k, temp, res;
    cin>>tc;
    while(tc--){
        cin>>n>>k;
        res = k + (k-1)/(n-1);
        cout<<res<<endl;
    }
    
    return 0;
}
