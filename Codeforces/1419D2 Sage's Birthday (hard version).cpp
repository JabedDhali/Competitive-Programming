#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll tc, n, temp, res;
    ll arr[100005], brr[100005];

    cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr, arr+n);
    temp = res = 0;
    for(int i=1; i<n; i+=2)
        brr[i] = arr[temp++];
    for(int i=0; i<n; i+=2)
        brr[i] = arr[temp++];
    for(int i=1; i<n-1; i++)
        if(brr[i-1]>brr[i] && brr[i]<brr[i+1]) res++;
    cout<<res<<endl;
    for(int i=0; i<n; i++)
        cout<<brr[i]<<" ";
    cout<<endl;

    return 0;
}
