/* Stack
*  link: https://neps.academy/br/exercise/292
*/

// #include <bits/stdc++.h>
#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, d; 
    stack<int> s;

    while (cin>>n>>d) {
        if (n == 0 && d == 0) return 0;
        int fsize = n-d;
        string num;
        cin >> num;
        for (char digit : num) {
            if (s.empty()) s.push(digit-'0');
            else {
                while (!s.empty() && (digit-'0') > s.top() && d>0) {
                    s.pop();
                    d--;
                }
                if(s.size() < (fsize)) s.push(digit-'0');
            }
        }
        string max = "";
        while (!s.empty()) {
            max = to_string(s.top()) + max; 
            s.pop();
        }  
        cout << max<<endl;
    }

    return 0;
}