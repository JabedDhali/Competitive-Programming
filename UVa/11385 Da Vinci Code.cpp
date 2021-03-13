#include<bits/stdc++.h>
#define ll long long
#define rng INT_MAX
#define space "                                                                                                      "
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll tc, n, temp;
    vector<int>vc;
    map<int, int>fib;
    string str;
    fib[1] = 1;
    for(ll x, prev1=1, prev2=1, i=2; i<100 && prev1+prev2<=rng; i++)
        x = prev1+prev2, fib[x]=i, prev2 = prev1, prev1 = x;
    cin>>tc;
    while(tc--){
        cin>>n;
        vc.clear();
        for(int x, i=0; i<n; i++)
            cin>>x, vc.push_back(x);
        char res[105] = space;
        getline(cin, str);
        getline(cin, str);
        for(int i=0, j=0; i<str.size() && j<str.size(); j++)
            if(str[j]>='A' && str[j]<='Z') str[i++] = str[j];
        for(int i=0; i<vc.size(); i++){
            res[fib[vc[i]]-1] = str[i];
        }
        for(int i=101; res[i]==' '; i--) res[i] = '\0';
        cout<<res<<endl;
    }

    return 0;
}
