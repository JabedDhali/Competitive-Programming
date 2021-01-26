#include<bits/stdc++.h>
using namespace std;
map<char, int> mp, pm;
map<char, int>::iterator it;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    string str, pat;
    cin>>str;
    for(int i=0; i<str.size(); i++) mp[str[i]]++;
    int n, temp, res=0;
    cin>>n;
    while(n--){
        cin>>pat;
        pm.clear();
        for(int i=0; i<pat.size(); i++) pm[pat[i]]++;
        temp = 1;
        for(it=pm.begin(); it!=pm.end() && temp; it++){
            if(mp[it->first] - it->second < 0) temp = 0;
        }
        if(temp) res++;
    }
    cout<<res<<endl;
    
    return 0;
}
