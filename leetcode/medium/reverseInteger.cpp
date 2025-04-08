// 7. Reverse Integer
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long rev = 0, signal = x > 0 ? 1 : -1;
        if (x == -2147483648 ) return 0;
        x = abs(x);
        while (x > 9) {
            rev = rev*10 + x%10;
            x/=10; 
        }
        int max = signal>0 ? 7 : 8;
        if (rev > 214748364 || rev == 214748364 && x > max) return 0;
        rev = (rev*10 + x)*signal;
        return rev;
    }
};