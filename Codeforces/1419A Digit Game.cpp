#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int tc, n, x, temp, res;
    string str;
    cin>>tc;
    while(tc--){
        cin>>n;
        cin>>str;
        if(n%2){
            res = 2;
            for(int i=0; i<n; i+=2)
                if(str[i]%2) res = 1;
        }
        else{
            res = 1;
            for(int i=1; i<n; i+=2)
                if(str[i]%2==0) res = 2;
        }
        cout<<res<<endl;
    }

    return 0;
}
