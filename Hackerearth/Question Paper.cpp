#include<bits/stdc++.h>
#define ll long long
#define inf 1000000000
#define ext 1000001 /// omitting the negative index value
using namespace std;
bool mp[2000006];
/// TLE if you use map for this problem.. 

int func(int n, int a, int b)
{
    memset(mp, false, sizeof mp);
    int cnt=1, temp = 0, res = 1;
    queue<int>q;
    q.push(0), q.push(inf), mp[0+ext] = true;
    while(cnt<=n && !q.empty()){
        temp = q.front(), q.pop();
        //cout<<temp<<endl;
        if(temp==inf) cnt++, q.push(inf);
        else{
            if(!mp[temp+a+ext]) q.push(temp+a), mp[temp+a+ext] = true, res++;
            if(!mp[temp-b+ext]) q.push(temp-b), mp[temp-b+ext] = true, res++;
        }
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int tc, n, a, b, temp, x, res;
    cin>>tc;
    while(tc--){
        cin>>n>>a>>b;
        res = func(n, a, b);
        cout<<res<<endl;
    }

    return 0;
}
