#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll tc, n, x, temp, res;
    map<int, int>div;
    ll cnt, maxdiv, maxcnt;

    cin>>tc;
    while(tc--){
        div.clear();
        cin>>n;
        temp = n, maxdiv = x = 1;
        for(ll i=2; i*i<=temp; i++){
            cnt = 0;
            while(temp%i==0) div[i]++, temp/=i;
            if(maxdiv<div[i]) maxdiv = div[i], x=i;
        }
        cout<<maxdiv<<endl;
        temp = 1;
        for(ll i=1; i<maxdiv; i++)
            cout<<x<<" ", temp*=x;
        cout<<n/temp<<endl;
    }

    return 0;
}
