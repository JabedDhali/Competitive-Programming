    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0), cout.tie(0);
        
        int tc, n, temp, x;
        cin>>tc;
        while(tc--){
            cin>>n;
            int arr[n+5], res[n+5] = {};
            for(int i=1; i<=n; i++)
                cin>>arr[i];
            temp = 0;
            for(int i=n; i>=1; i--){
                temp = max(temp, arr[i]);
                if(temp) res[i] = 1, temp--;
                else res[i] = 0;
            }
            for(int i=1; i<=n; i++)
                cout<<res[i]<<" ";
            cout<<endl;
        }
        
        return 0;
    }
