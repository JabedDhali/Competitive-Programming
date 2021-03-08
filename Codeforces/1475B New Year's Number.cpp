stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int tc, n, temp, res;
    cin>>tc;
    while(tc--){
        cin>>n;
        temp = n/2020;
        if(n%2020 > temp) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
