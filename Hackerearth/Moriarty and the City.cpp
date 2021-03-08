#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n, prev, x, indx, res;
    cin>>n;
    res = indx = 0, prev = -1;
    for(int i=1; i<=n; i++){
        cin>>x;
        if(prev != x) res = max(res, i-indx), indx = i;
        prev = x;
        if(i == n) res = max(res, i-indx+1);
    }
    cout<<res<<endl;
}
