#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int tc, n, temp, res;
    string str;
    cin>>tc;
    while(tc--){
        cin>>n>>str;
        temp = 0;
        for(int i=0; i<=4 && !temp; i++)
            if(str.substr(0, i)+str.substr(n-4+i, 4-i)=="2020") temp = 1;
        if(temp) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
