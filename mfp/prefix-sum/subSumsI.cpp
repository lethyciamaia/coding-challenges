// Subarray Sums I: https://cses.fi/problemset/task/1660
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    // fast io n 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, count = 0;
    ll x, sum = 0;
    cin >>n>>x;

    vector<ll> nums(n);
    for(int i = 0;i<n;i++) cin>>nums[i];

    unordered_map<ll, int> sums;
    sums[sum] = 1;
    for(int c : nums) {
        sum+=c;
        count += sums[sum-x];
        sums[sum]++;
    }

    cout<<count<<endl;
    return 0;
}
