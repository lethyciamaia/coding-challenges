// 1539. Kth Missing Positive Number
#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        if (arr[0] > k) return k; // before
        if (arr[n-1] - n <= 0) return k+n; // after
        int i = 0;
        for (int b=n/2; b >=1; b/=2) { // inside:  find i | arr[i] - (i+1) < k
            while (i+b < n && arr[i+b]-(i+b+1) < k) i+=b;
        }
        return k + i + 1;
    }
};