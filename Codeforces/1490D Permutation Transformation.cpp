#include<bits/stdc++.h>
using namespace std;
int arr[105], depth[105];
int gen_depth(int left, int routedepth, int right)
{
    if(left > right) return 0;
    int route = left;
    for(int i=left; i<=right; i++)
        if(arr[route] < arr[i]) route = i;
    depth[route] = routedepth;
    gen_depth(left, routedepth + 1, route - 1);
    gen_depth(route +1, routedepth + 1, right);
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int tc, n, route, temp, res;

    cin>>tc;
    while(tc--){
        cin>>n;
        for(int i=0, x = 0; i<n; i++) cin>>arr[i];
        gen_depth(0, 0, n-1);
        for(int i=0; i<n; i++) cout<<depth[i]<<" ";
        cout<<endl;
    }

    return 0;
}
