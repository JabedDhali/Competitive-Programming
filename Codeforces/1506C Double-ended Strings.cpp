#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int tc, n1, n2, temp, res;
    string str1, str2;
    cin>>tc;
    while(tc--){
        cin>>str1>>str2;
        n1 = str1.size(), n2 = str2.size();
        int dp[n1+5][n2+5] = {};
        temp = 0;
        for(int i=1; i<=n1; i++){
            for(int j=1; j<=n2; j++){
                if(str1[i-1]==str2[j-1]) 
                    dp[i][j] = dp[i-1][j-1] + 1;
                temp = max(temp, dp[i][j]);
            }
        }
        res = n1-temp + n2-temp;
        cout<<res<<endl;
    }
    
    return 0;
}
