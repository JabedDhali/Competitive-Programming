#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int tc, n, x, res;
	long long temp;
    vector<pair<int, int> >vc;
    vector<int>winner;
    cin>>tc;
    while(tc--){
        cin>>n;
        vc.clear(), winner.clear();
        for(int i=0; i<n; i++)
            cin>>temp, vc.push_back({temp, i+1});
        sort(vc.begin(), vc.end());
 
        temp = res = x = 0;
        for(int i=0; i<n-1; i++){
            temp += vc[i].ff;
            if(temp < vc[i+1].ff) x = i+1; //  x is the last looser
        }
        for(int i=x; i<n; i++) winner.push_back(vc[i].ss);
        sort(winner.begin(), winner.end());
        res = winner.size();
        cout<<res<<endl;
        for(int i=0; i<res; i++) cout<<winner[i]<<" ";
        cout<<endl;
    }
    return 0;
}
