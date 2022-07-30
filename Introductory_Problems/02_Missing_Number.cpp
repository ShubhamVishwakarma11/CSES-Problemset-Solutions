#include <bits/stdc++.h> 
using namespace std;
 
#define Pikachu ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
#define int long long
#define nl '\n'
 
 
void solve() {
    int n; cin >> n;
    vector<int> vec;
    for (int i=0;i<n-1;i++) {
        int x; cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());
    int i =0;
    for (i=0;i<n-1;i++) {
        if (vec[i] != i+1) {
            cout << i+1 << nl; break;
        }
    }
    if (i==n-1) cout << i+1 << nl;
}
 
int32_t main(void) {
    Pikachu;
    // int t; cin >> t;
    // while (t--) {
        solve();
    // }
    return 0;
}