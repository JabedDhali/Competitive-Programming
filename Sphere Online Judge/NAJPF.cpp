#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll h[1000005], AP[1000005], A, B;
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

void robinKarp(ll n, ll k, ll hp)
{
    vc.clear();
    ll hv=0, temp=0, res=0;
    hp = (hp*AP[n-k])%B;
    A=1000000007, B=1000099999; /// both are prime
    for(ll i=k; i<=n; i++){
        hv = (h[i]+B-h[i-k])%B;
        hv = (hv*AP[n-i])%B;
        if(hv==hp) vc.push_back(i-k+1);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    string str, pat;
    ll tc, n, k, temp, res;
    ll hstr, hpat;
    cin>>tc;
    while(tc--){
        cin>>str>>pat;
        n = str.size(), k=pat.size();
        if(k>n){
			cout<<"Not Found"<<endl;
		}
		else{
			hashGen(str, n);
			hpat = hashCnt(pat, k);
			robinKarp(n, k, hpat);
			if(!vc.size()) cout<<"Not Found"<<endl;
			else{
				cout<<vc.size()<<endl;
				for(ll i=0; i<vc.size(); i++){
					cout<<vc[i];
					if(i<vc.size()-1) cout<<" ";
				}
			}
		}
        if(tc) cout<<endl;
    }


    return 0;
}
