#include <bits/stdc++.h> 
using namespace std;
 
#define Pikachu ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
#define int long long
#define nl '\n'
 
 
void solve() {
    int n; cin >> n;
    if (n == 1) {
        cout << 1 << nl;
        return;
    }
    if (n<=3) cout << "NO SOLUTION" << nl;
 
    for (int i = 2; i<= n; i+=2) {
        cout << i << " ";
    }
    for (int i=1; i<=n; i+=2) {
        cout << i << " ";
    }
    cout << nl;
    return;
}
 
int32_t main(void) {
    Pikachu;
    // int t; cin >> t;
    // while (t--) {
        solve();
    // }
    return 0;
}