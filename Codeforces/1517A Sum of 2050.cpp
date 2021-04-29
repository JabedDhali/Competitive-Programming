#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	ll tc, n, temp, res;
	cin>>tc;
	while(tc--){
	    res = 0, temp = 205000000000000000;
	    cin>>n;
	    if(n%2050) cout<<-1<<endl;
	    else{
	        while(temp>=2050){
	            while(n >= temp) n -= temp, res ++;
	            temp /= 10;
	        }
	        cout<<res<<endl;
	    }
	}
	
	return 0;
}
