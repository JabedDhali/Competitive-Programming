    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0), cout.tie(0);
        
        ll tc, n, temp, res;
        cin>>tc;
        while(tc--){
            cin>>n;
            res = 1;
            while((res*(res+1))/2<n) res++;
            if((res*(res+1))/2==n+1) res++;
            cout<<res<<endl;
        }
        
        return 0;
    }
