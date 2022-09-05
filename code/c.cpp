#include "bits/stdc++.h"

using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[200010];
    int b[200010];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    a[n + 1] = a[1];
    b[n + 1] = b[1];
    for (int i = 1; i <= n; i++) {
        if (a[i] == b[i])
            continue;
        if (a[i] > b[i]) {
            cout << "no" << endl;
            return;
        }
        if (b[i + 1] + 1 < b[i]) {
            cout << "no" << endl;
            return;
        }
    }
    cout << "yes" << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
/*
5
4 3 4 3 1
4 3 4 3 2
 * */