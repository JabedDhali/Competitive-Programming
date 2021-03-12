#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    
    ll tc, n, m, temp, res;
    cin>>tc;
    while(tc--){
        cin>>n>>m;
        if(n==1 && m==1) res = 1;
        else if(n==1) res = m-1;
        else if(n==m) res = ((m-1)*m)/2;
        else res = ((m-1)*m)/2 - ((m-n-1)*(m-n)/2);
        cout<<res<<endl;
    }
    
    return 0;
}
