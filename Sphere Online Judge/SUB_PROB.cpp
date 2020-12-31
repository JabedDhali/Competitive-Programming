#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll h[100005], AP[100005], A, B;
map<string, int>mp;
vector<ll>vc;
void hashGen(string str, ll n)
{
    ll res=0, hv=0;
    h[0] = 0, AP[0] = 1;
    A=1000000007, B=1000099999; /// both are prime
    for(ll i=1; i<=n; i++){
        AP[i] = (AP[i-1]*A)%B;
        h[i] = (h[i-1]+str[i-1]*AP[i])%B;
    }
}

ll hashCnt(string str, ll n)
{
    ll res=0, hv=0;
    A=1000000007, B=1000099999; /// both are prime
    for(int i=1; i<=n; i++){
        hv = (hv+str[i-1]*AP[i])%B;
    }
    return hv;
}

bool robinKarp(ll n, ll k, ll hp)
{
    ll hv=0, temp=0, res=0;
    A=1000000007, B=1000099999; /// both are prime
    for(ll i=k; i<=n; i++){
        hv = (h[i]+B-h[i-k])%B;
        if((hp*AP[i-k])%B == hv) return true;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    string str, pat;
    ll tc, n, k, temp, res;
    ll hstr, hpat;
    cin>>str;
    n = str.size();
    hashGen(str, n);
    cin>>temp;
    while(temp--){
        cin>>pat;
        k = pat.size();
        hpat = hashCnt(pat, k);
        if(mp[pat]==1) cout<<"Y"<<endl;
        else if(mp[pat]==-1) cout<<"N"<<endl;
        else if(robinKarp(n, k, hpat)){
			mp[pat] = 1;
			cout<<"Y"<<endl;
		}
        else{
			mp[pat] = -1;
			cout<<"N"<<endl;
		}
    }

    return 0;
}

