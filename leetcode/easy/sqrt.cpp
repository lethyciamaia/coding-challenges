// 69. Sqrt(x) 
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        long long i = 0;
        while (i*i <= x) i++;
        return i-1;
    }
};

// Using Bi Search
class SolutionBS {
public:
    long mySqrt(int x) {
        long l = 0, r = x, mid, res = 0;
        while(l <= r) {
            mid = l+(r-l)/2;
            if (mid*mid == x) return mid;
            else if (mid*mid > x) r = mid-1;
            else {
                res = mid;
                l = mid+1;
            }
        }
        return res;
    }
};

