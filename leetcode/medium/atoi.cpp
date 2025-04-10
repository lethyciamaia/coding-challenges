// 8. String to Integer (atoi)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int idx = 0, signal = 1;
        long long ret = 0;
        while(s[idx] == ' ') idx++;
        cout << idx<<endl;

        if (s[idx] == '-') { signal = -1;idx++; }
        else if (s[idx] == '+') idx++;

        while (idx < s.size() && s[idx] >= '0' && s[idx] <= '9') {
            if (ret > 2147483648) break;
            ret = ret*10 + s[idx] - '0';
            idx++;
        }

        ret*=signal;

        if (ret > 2147483647) ret = 2147483647;
        else if (ret < -2147483648) ret = -2147483648;

        return ret;
    }
};