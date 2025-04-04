// Subarray Divisibility: https://cses.fi/problemset/task/1662
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    // fast io n 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >>n;

    vector<ll> nums(n);
    for(ll i = 0;i<n;i++) cin>>nums[i];

    unordered_map<ll, int> sums;
    ll sum = 0, count = 0;
    sums[sum] = 1;
    for(int c : nums) {
        sum+=c;
        ll modul = (sum%n +n)%n; // for neg numbers % works diff then math's mod op
        count += sums[modul];
        sums[modul]++;
    }

    cout<<count<<endl;
    return 0;
}
