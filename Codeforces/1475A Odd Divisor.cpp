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
        while(n%2==0) n/=2;
        if(n==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
 
    return 0;
}
