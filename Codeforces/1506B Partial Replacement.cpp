#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int tc, n, k, temp, res;
    string str;
    cin>>tc;
    while(tc--){
        cin>>n>>k>>str;
        vector<int>vc;
        for(int i=0; i<n; i++)
            if(str[i]=='*') vc.push_back(i);
        if(vc.size()==1) res = 1;
        else{
            res = 2;
            temp = vc[0];
            for(int i=0, j=0; i<vc.size(); i++){
                if(vc[i] > vc[j]+k)
                    res++, j = i-1;
            }
        }
        cout<<res<<endl;
    }
    
    return 0;
}
