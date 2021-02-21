#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int tc, n, arr[55], temp, res;
    cin>>tc;
    while(tc--){
        cin>>n;
        res = 0;
        for(int i=0; i<n; i++) cin>>arr[i];
        for(int i=1, x, y; i<n; i++){
            x = min(arr[i-1], arr[i]);
            y = max(arr[i-1], arr[i]);
            if(x*2 < y){
                while(x*2 < y) res++, x *= 2;
            }
        }
        cout<<res<<endl;
    }

    return 0;
}
