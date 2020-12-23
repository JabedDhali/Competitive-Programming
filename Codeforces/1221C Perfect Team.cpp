#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll tc, c, m, x, temp, res;
    cin>>tc;
    while(tc--){
        cin>>c>>m>>x;
        res = temp = min(c, min(m, x));
        c-=temp, m-=temp, x-=temp;
        if(m) res += min(min(c, m), (c+m+x)/3);
        cout<<res<<endl;
    }
    
    return 0;
}
