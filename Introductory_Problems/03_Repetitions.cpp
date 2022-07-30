#include <bits/stdc++.h> 
using namespace std;
 
#define Pikachu ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
#define int long long
#define nl '\n'
 
 
void solve() {
    string str; cin >> str;
    int maxC = 0;
    int count = 0;
    char currChar = 'q';
    for (int i=0;i<str.size();i++) {
        if (str[i] == currChar) {
            count++;
            maxC = max(maxC, count);
        }
        else {
            currChar = str[i];
            count = 1;
            maxC = max(maxC, count);
        }
    }
 
    cout << maxC << nl;
}
 
int32_t main(void) {
    Pikachu;
    // int t; cin >> t;
    // while (t--) {
        solve();
    // }
    return 0;
}