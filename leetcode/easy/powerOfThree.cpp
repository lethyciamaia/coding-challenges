// 326. Power of Three
#include <iostream>
#include <math.h>

using namespace std;

// Iterative -> O(logN)
class SolutionIt {
public:
    bool isPowerOfThree(int n) {
        if (n == 1) return true;
        if (n == 0) return false;
        while(n % 3 == 0){
            n /= 3;
            if (n == 1) return true;
        }
        return false;
    }
};

// Using log -> O(1)
class SolutionLog {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;
        long long res = log10(n)/log10(3);
        return res == int(res);
    }
};

// O(1)
class Solution3 {
public:
    bool isPowerOfThree(int n) {
        // 1162261467 is the max power of three that an int can hold
        return (n > 0) && (1162261467 % n == 0);
    }
};