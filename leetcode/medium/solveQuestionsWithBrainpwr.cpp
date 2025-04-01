#include <vector>
#include <unordered_map>

using namespace std;

// Using Hash table
// runtime: 20ms
// unordered_map does not guarantee perfect O(1) for searching, depends on hash dispersion. 
// some ops can have O(log N) due to colisions.
class Solution {
public:
    unordered_map<int, long long> memo = {};
    long long calculate(vector<vector<int>>& q, int idx) {
        if (idx >= q.size()) return 0;
        if (memo.find(idx) != memo.end()) return memo[idx];
        int bpwr = q[idx][1] + 1;
        memo[idx] = max(q[idx][0] + calculate(q, idx+bpwr), calculate(q, idx+1));
        return memo[idx];
    }

    long long mostPoints(vector<vector<int>>& q) {
        return calculate(q, 0);
    }
};

// Using vector 
// runtime: 0ms
class Solution2 {
public:
    long long mostPoints(vector<vector<int>>& q) {
        int n = q.size();
        vector<long> memo(n, 0);
        memo[n-1] = q[n-1][0];
        for (int i = n - 2; i >= 0; i--) {
            int next_pos = i + q[i][1]+ 1;
            memo[i] = max(q[i][0] + (next_pos < n ? memo[next_pos] : 0), memo[i+1]);
        }
        return memo[0];
    }
};