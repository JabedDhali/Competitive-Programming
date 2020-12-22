#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int tc, n, temp, res, flag;
    int arr[500005];
    cin>>tc;
    while(tc--){
        cin>>n; flag = 0;
        for(int i=0; i<n; i++) cin>>arr[i];
        for(int i=1; i<n && !flag; i++)
            if(arr[i-1]<=arr[i]) flag = 1;
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
