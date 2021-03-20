#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int tc, n, x, temp, res;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++){
        cin>>n;
        res = 0;
        for(int i=0; i<n; i++){
            cin>>temp;
            if(temp>0) res += temp;
        }
        cout<<"Case "<<cs<<": "<<res<<endl;
    }
    return 0;
}
