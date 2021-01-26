#include<bits/stdc++.h>
using namespace std;
bool check(string str)
{
    for(int i=0; i<str.size(); i++)
        if(!isdigit(str[i])) return 0;
    return 1;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    string str;
    int tc;
    cin>>tc;
    while(tc--){
        cin>>str;
        if(str.size()==10){
            if(str[0]=='0') cout<<"NO"<<endl;
            else if(check(str)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    
    return 0;
}
