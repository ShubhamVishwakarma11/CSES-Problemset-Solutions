#include <bits/stdc++.h> 
using namespace std;
 
#define Pikachu ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
#define int long long
#define nl '\n'
 
 
void solve() {
    int n; cin >> n;
    while (true) {
        if (n == 1) break;
        cout << n << ' ';
        if (n%2 == 0) n = n/2;
        else {
            n = 3*n + 1;
        }
    }
    cout << 1 << nl;
}
 
int32_t main(void) {
    Pikachu;
    // int t; cin >> t;
    // while (t--) {
        solve();
    // }
    return 0;
}