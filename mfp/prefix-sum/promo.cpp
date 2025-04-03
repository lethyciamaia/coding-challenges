// https://codeforces.com/contest/1697/problem/B
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
    // fast i/o
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, q;
    cin >> n >> q;
    
    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];
    vector<ll> pref(n+1);
    pref[0] = 0;
    sort(v.rbegin(), v.rend());
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i-1] + v[i-1];
    }

    while (q--) {
        int x, y; cin>>x>>y;
        cout << pref[x] - pref[x-y] << endl;
    }

    return 0;
}