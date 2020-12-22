#include<bits/stdc++.h>
#define ll long long
using namespace std;
int arr[1000006];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll tc, n, k, m, temp, res;

    cin>>tc;
    while(tc--){
        cin>>n>>k;
        temp = n*k;
        for(int i=1; i<=temp; i++)
            cin>>arr[i];
        m = n/2 + (n%2 ? 1: 0);
        res = 0;
        for(int i=(m-1)*k+1; i<=temp; i+=n-m+1)
            res += arr[i];
        cout<<res<<endl;
    }

    return 0;
}
