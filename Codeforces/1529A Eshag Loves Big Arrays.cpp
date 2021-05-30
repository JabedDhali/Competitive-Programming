#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int tc, n, temp, res;
    cin>>tc;
    while(tc--){
        cin>>n;
        int arr[n];
        for(int i=0, x; i<n; i++)
            cin>>arr[i];
        sort(arr, arr+n);
        res = 0;
        while(arr[res] == arr[0]) res++;
        res = n - res;
        cout<<res<<endl;
    }
    return 0;
}
