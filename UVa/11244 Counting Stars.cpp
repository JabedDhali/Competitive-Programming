#include<bits/stdc++.h>
#define isValid(x, y) x>=0 && x<r && y>=0 && y<c
using namespace std;
int r, c, temp, res;
string sky[105];

int isStar(int x, int y)
{
    if(isValid(x-1, y-1) && sky[x-1][y-1]=='*') return 0;
    if(isValid(x-1, y) && sky[x-1][y]=='*') return 0;
    if(isValid(x-1, y+1) && sky[x-1][y+1]=='*') return 0;
    if(isValid(x, y-1) && sky[x][y-1]=='*') return 0;
    if(isValid(x, y+1) && sky[x][y+1]=='*') return 0;
    if(isValid(x+1, y-1) && sky[x+1][y-1]=='*') return 0;
    if(isValid(x+1, y) && sky[x+1][y]=='*') return 0;
    if(isValid(x+1, y+1) && sky[x+1][y+1]=='*') return 0;
    return 1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    while(cin>>r>>c && (r || c)){
        for(int i=0; i<r; i++) cin>>sky[i];
        res = 0;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(sky[i][j]=='*' && isStar(i, j)) res ++;
            }
        }
        cout<<res<<endl;
    }

    return 0;
}
