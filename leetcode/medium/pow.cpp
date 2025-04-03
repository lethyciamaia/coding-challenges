// 50. Pow(x, n)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if ( n == 0 ) return 1;
        if ( x == 0 ) return 0;
        vector<double> pows;
        
        double p = n;
        if (n < 0) {
            x = 1/x;
            p = -p;
        };

        double i = 1;
        pows.push_back(x);
        while (i*2 < p) {
            x *= x;
            pows.push_back(x);
            i+=i;
        }

        double f = p-i;
        double j = pows.size()-1;
        while (f && j>=0) {
            if (i > f) {
                i/=2;
                j--;}
            else {
                x*=pows[j];
                f-=i;
            }
        }

        return x;
    }
};