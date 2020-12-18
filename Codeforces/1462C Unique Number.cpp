#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll tc, n, temp, res;
    cin>>tc;
    while(tc--){
        cin>>n;
        temp = res = 0;
        if(n>45){///1+2+3+4+5+6+7+8+9 = 45
            cout<<-1<<endl;
            continue;
        }
        for(int i=9, j=1; i>=1 && n>=i; i--)
            res = i*j + res, n-=i, j*=10;
        if(n) cout<<n;
        if(res) cout<<res;
        cout<<endl;
    }

    return 0;
}
