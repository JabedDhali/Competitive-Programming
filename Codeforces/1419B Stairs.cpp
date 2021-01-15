#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll tc, n, s, temp, res;
    cin>>tc;
    while(tc--){
        cin>>n;
        res = 0, s = temp = 1;
        while(temp<=n){
            res++, n -= temp;
            s = s*2 + 1;
            temp = (s*(s+1))/2;
        }
        cout<<res<<endl;
    }

    return 0;
}
