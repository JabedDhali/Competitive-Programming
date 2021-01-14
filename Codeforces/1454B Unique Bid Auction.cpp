#include<bits/stdc++.h>
#define ll long long
#define lmt 200005
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll tc, n, temp, res;
    int arr[lmt], ind[lmt];

    cin>>tc;
    while(tc--){
        cin>>n;
        memset(arr, 0, sizeof arr);
        memset(ind, 0, sizeof ind);
        for(int i=1; i<=n; i++)
            cin>>temp, arr[temp]++, ind[temp] = i;
        res = -1;
        for(int flag = 1, i=1; i<=n && flag; i++)
            if(arr[i]==1) res = ind[i], flag = 0;
        cout<<res<<endl;
    }

    return 0;
}
