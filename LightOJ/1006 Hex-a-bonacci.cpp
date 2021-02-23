#include<bits/stdc++.h>
#define ll long long
#define mod 10000007
using namespace std;

ll dp[10005];
int a, b, c, d, e, f;
ll fn(int n) {
    if(dp[n]!=-1) return dp[n];
    dp[n] = (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6)) % mod;
    return dp[n];
}
int main() {
    int n, cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        memset(dp, -1, sizeof dp);
        for(int i=0; i<6; i++) scanf("%lld", &dp[i]), dp[i] = dp[i] % mod;
        scanf("%d", &n);
        printf("Case %d: %lld\n", caseno, fn(n) % mod);
    }
    return 0;
}
