    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0), cout.tie(0);
        
        int tc, n, temp, res;
        int a[105], b[105], tm[105];
        cin>>tc; 
        while(tc--){
            cin>>n;
            b[0] = temp = res = 0;
            for(int i=1; i<=n; i++)
                cin>>a[i]>>b[i];
            for(int i=1; i<=n; i++)
                cin>>tm[i];
            for(int i=1; i<=n; i++){
                res = res + a[i] - b[i-1] + tm[i];
                if(i<n) res = max(res + (b[i]-a[i]+1)/2, b[i]);
            }
            cout<<res<<endl;
        }
        
        return 0;
    }
