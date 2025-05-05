// 278. First Bad Version
#include <bits/stdc++.h>
using namespace std;
// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution {
public:
    long long firstBadVersion(int n) {
        long long k = 0;
        for (long long b=n/2; b >= 1; b/=2) {
            while (k+b < n && !isBadVersion(k+b)) k+=b;
        }
        return k+1;
    }
};