#include <bits/stdc++.h>
#define ll long long 
#define inf 1e9
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	int tc, n, m, res;
	cin>>tc;
	while(tc--){
	    cin>>n>>m;
	    int arr[n+5][m+5], temp[n+5][m+5];
	    for(int i=0; i<n; i++){
	        for(int j=0; j<m; j++)
	            cin>>arr[i][j];
	    }
	    for(int k=m-1, x; k>=0; k--){
	        for(int i=0; i<n; i++)
	            sort(arr[i], arr[i]+m);
	        x = 0;
	        for(int i=0; i<n; i++)
	            if(arr[i][0]<arr[x][0]) x = i;
	        temp[x][k] = arr[x][0];
	        arr[x][0] = inf;
	        for(int i=0; i<n; i++)
	            if(i!=x) temp[i][k] = arr[i][k], arr[i][k] = inf;
	    }
	    for(int i=0; i<n; i++){
	        for(int j=0; j<m; j++)
	            cout<<temp[i][j]<<" ";
	        cout<<endl;
	    }
	    
	}
	
	return 0;
}
