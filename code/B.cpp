#include "bits/stdc++.h"
using namespace std;
void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mapp[510][510];
    memset(mapp,0,sizeof mapp);
    mapp[c][d] = 1;
    for(int i = d;i >= 1;i --) {
        int x = (c - (d - i)) % (a + 1);
        if (x < (c - (d - i)))
            x ++;
        mapp[x][i] = 1;
        for(int j = x;j >= 1;j -= b) {
            mapp[j][i] = 1;
        }
        for(int j = x;j <= a;j += b) {
            mapp[j][i] = 1;
        }
    }
    for(int i = d + 1;i <= a;i ++) {
        int x = (c + (i - d)) % (a + 1);
        if (x < (c + (i - d)))
            x ++;
        mapp[x][i] = 1;
        for(int j = x;j >= 1;j -= b) {
            mapp[j][i] = 1;
        }
        for(int j = x;j <= a;j += b) {
            mapp[j][i] = 1;
        }
    }
    for(int i = 1;i <= a;i ++) {
        for(int j = 1;j <= a;j ++) {
            if (mapp[i][j] == 1)
                cout<<"X";
            else
                cout<<".";
        }
        cout<<endl;
    }
}
int main() {
    int t;
    cin>>t;
    while (t --) {
        solve();
    }
    return 0;
}