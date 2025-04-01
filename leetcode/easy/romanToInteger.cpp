// 13. Roman to Integer
#include <string>

using namespace std;

class Solution {
public:
//  It is guaranteed that s is a valid roman numeral in the range [1, 3999]  
    int romanToInt(string s) {
        int last = 0, sum = 0, aux = 0;
        for (char c : s) {
            switch (c) {
            case 'I':
                aux = 1;
                break;
            case 'V':
                aux = 5;
                break;
            case 'X':
                aux = 10;
                break;
            case 'L':
                aux = 50;
                break;
            case 'C':
                aux = 100;
                break;
            case 'D':
                aux = 500;
                break;
            case 'M':
                aux = 1000;
                break;
            }
            sum += last >= aux ? aux : aux - 2*last;
            last = aux;
        }
        return sum;
    }
};