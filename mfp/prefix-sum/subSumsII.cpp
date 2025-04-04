// Subarray Sums II: https://cses.fi/problemset/task/1661
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    // fast io n 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x;
    cin >>n>>x;

    vector<ll> nums(n);
    for(int i = 0;i<n;i++) cin>>nums[i];

    map<ll, int> sums;
    ll count = 0, sum = 0;
    sums[sum] = 1;
    for(int c : nums) {
        sum+=c;
        count += sums[sum-x];
        sums[sum]++;
    }

    cout<<count<<endl;
    return 0;
}
