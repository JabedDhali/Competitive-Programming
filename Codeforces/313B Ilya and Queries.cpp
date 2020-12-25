#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    string str;
    int dp[100005] = {};
    int n, m, l, r, temp, res;
    cin>>str;
    n = str.size();
    for(int i=0; i<n-1; i++){
        if(str[i]==str[i+1]) dp[i]=dp[i-1]+1;
        else dp[i] = dp[i-1];
    }
    dp[n-1] = dp[n-2];
    cin>>m;
    while(m--){
        cin>>l>>r;
        res = dp[r-1]-dp[l-1];
        if(dp[l-1]==dp[l-2]) res--;
        if(dp[r-1]==dp[r-2]) res++;
        cout<<res<<endl;
    }
    
    return 0;
}
