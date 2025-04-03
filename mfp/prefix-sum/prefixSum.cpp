// https://www.codechef.com/problems/PRFSM
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    // fast io n --- TLE otherwise
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int t;
	cin >> t;
// 	BLOCK:
    for(int i=0;i<t;i++) {
        int n, q; cin >> n;
        vector<ll> v(n);
        for(int j=0;j<n;j++) cin >> v[j];
        
        // Prep
        vector<ll> pref(n+1, 0);
        for(int j=0;j<n;j++) pref[j+1] = pref[j]+v[j];
        
        // Queries
        cin >> q;
        while(q--) {
            int l, r; cin >> l >> r;
            cout << pref[r] - pref[l-1] << " ";
        }
    }
	
    return 0;
}
