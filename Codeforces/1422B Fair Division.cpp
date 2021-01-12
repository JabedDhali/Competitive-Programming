#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll tc, n, temp, res, w[3];
    cin>>tc;
    while(tc--){
        cin>>n;
        res = w[1] = w[2] = 0;
        while(n--) cin>>temp, w[temp]++, res += temp;
        if(res%2) cout<<"NO"<<endl;
        else if((res/2)%2 && !w[1]) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
    return 0;
}
