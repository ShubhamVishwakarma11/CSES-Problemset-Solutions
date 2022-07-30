#include <bits/stdc++.h> 
using namespace std;
 
#define Pikachu ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
#define int long long
#define nl '\n'
 
 
void solve() {
    int n; cin >> n;
    vector<int> vec;
    for (int i=0;i<n;i++) {
        int x; cin >> x;
        vec.push_back(x);
    }
    int sum = 0;
    int maxi = 0;
    for (int i=1;i<n;i++) {
        maxi = max(maxi,vec[i-1]);
        if (vec[i] < maxi) {
            sum += maxi - vec[i];
        }
    }
    cout << sum << nl;
}
 
int32_t main(void) {
    Pikachu;
    // int t; cin >> t;
    // while (t--) {
        solve();
    // }
    return 0;
}