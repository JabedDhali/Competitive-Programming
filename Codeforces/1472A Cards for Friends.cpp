#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll tc, w, h, n, r, c, temp, res;
    cin>>tc;
    while(tc--){
        cin>>w>>h>>n;
        r = c = 1;
        while(w%2==0) r*=2, w/=2;
        while(h%2==0) c*=2, h/=2;
        res = r*c;
        if(res>=n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}
