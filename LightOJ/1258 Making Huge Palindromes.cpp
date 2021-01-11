/*  This is a prefix function algorithm.
    Let, str = "anncbaaababaaa"
    after reversing,"aaababaaabcnna"
    Palindrome="anncbaaababaaabcnna" of 19 characters.
    
    In this program, we assume a string pal = reverse(str)+str
    where the maximum equal proper prefix and proper suffix is 
    evaluated. If there have only null string, that means the 
    palindrome is 2*n where n = str.size();
    Otherwise the palindrome will be a string of size
    2*n-pref[pal.size()-1];
    
    "#" is added to ensure the pref[x]<=n.
*/

#include<bits/stdc++.h>
using namespace std;
int pref[2000006];

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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int tc, n, m, temp, res;
    string str, ext;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++){
        cin>>str;
        n = str.size();
        ext = str;
        reverse(str.begin(), str.end());
        str = str + "#" + ext;
        prefix(str);
        res = 2*n - pref[str.size()-1];
        cout<<"Case "<<cs<<": "<<res<<endl;
    }

    return 0;
}
