#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll inf = 1e15+15;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll tc, n, temp, res;
    cin>>tc;
    while(tc--){
        cin>>n;
        ll arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr, arr+n);
        res = 0, temp = inf;
        for(int i=1; i<n; i++){
            temp = min(temp, abs(arr[i] - arr[i-1]));
            if(temp < arr[i]) break;
            res ++;
        }
        res ++;
        cout<<res<<endl;
    }
    
    return 0;
}
