#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc, n, arr[105];
    cin>>tc;
    while(tc--){
        cin>>n;
        int rem[5] = {};
        for(int i=0, x; i<n; i++) cin>>x, rem[x%3]++;
        int temp = n/3, res = 0;
        for(int i=0; i<3; i++){
            if(rem[i]>temp){
                res += rem[i]-temp;
                rem[(i+1)%3] += rem[i]-temp;
                rem[i]=temp;
                i = -1;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
