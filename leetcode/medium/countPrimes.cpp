#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPrimes(long n) {
        vector<bool> nums(n, true);
        long prime = 2;
        int count=0;

        while(prime < n) {
            long m = prime;
            while (prime * m < n) {
                nums[prime * m] = false;
                m++;
            }
            count++; prime++;
            while(prime < n && nums[prime] == false) prime++;
        }
        return count;
    }
};