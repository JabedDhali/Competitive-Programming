#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll tc, n, w, temp, res;
    set<ll>st;
    set<ll>::iterator it;
    scanf("%lld", &tc);
    for(ll cs=1, x, y; cs<=tc; cs++){
        st.clear();
        scanf("%lld %lld",&n, &w);
        for(int i=0; i<n; i++){
            scanf("%lld %lld", &x, &y);
            st.insert(y);
        }
        it = st.begin(), res = 1, temp = *it;
        for(it=st.begin(); it!=st.end(); it++){
            if(temp+w < *it) res++, temp=*it;
        }
        printf("Case %lld: %lld\n", cs, res);
    }
}
