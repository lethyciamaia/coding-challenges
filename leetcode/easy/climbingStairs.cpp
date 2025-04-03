// 70. Climbing Stairs
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    unordered_map<int, int> memo{{1, 1}, {2, 2}};
    int climbStairs(int n) {
        if (memo.find(n) != memo.end()) return memo[n]; 
        memo[n] = climbStairs(n-1) + climbStairs(n-2); 
        return memo[n];
    }
};