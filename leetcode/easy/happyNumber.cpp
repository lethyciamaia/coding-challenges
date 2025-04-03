// 202. Happy Number
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        set<int> visited = {};
        int aux = n;
        while (aux != 1) {
            if(visited.find(aux) != visited.end()) return false;
            visited.insert(aux);

            int q = 1, sum = 0, r;
            while (q != 0) {
                r = aux%10;
                q = aux/10;
                sum += r*r;
                aux = q;
            }
            aux = sum;
        }
        return true;
    }
};