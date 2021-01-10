#include<bits/stdc++.h>
using namespace std;
int pref[1000006];

void prefix(string str)
{
    int n = str.size();
    for(int i=1; i<n; i++){
        int j = pref[i-1];
        while(j>0 && str[i]!=str[j]) j = pref[j-1];
        if(str[i] == str[j]) j++;
        pref[i] = j;
    }
}

int kmp(string str, string pat)
{
    int n = str.size();
    int m = pat.size();
    prefix(pat);
    int i = 0, j = 0, cnt = 0;
    while(i < n){
        if(str[i] == pat[j]){
            i++, j++;
            if(j==m) cnt++, j=pref[j-1];
        }
        else if(j==0) i++;
        else j = pref[j-1];
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int tc, n, m, temp, res;
    string str, pat;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++){
        cin>>str>>pat;
        res = kmp(str, pat);
        cout<<"Case "<<cs<<": "<<res<<endl;
    }

    return 0;
}
