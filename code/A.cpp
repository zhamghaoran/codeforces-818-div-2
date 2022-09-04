#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    int b;
    cin>>b;
    cout<<b + (b / 2 + b / 3) * 2<<endl;
}
signed main() {
    int a;
    cin>>a;
    while (a --) {
        solve();
    }
    return 0;
}
