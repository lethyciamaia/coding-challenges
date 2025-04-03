//  https://cses.fi/problemset/task/1660
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >>n>>x;

    vector<int> v(n);
    for(int i = 0;i<n;i++) cin>>v[i];
    sort(v.rbegin(), v.rend());

    int count = 0, sum=0;
    for(int i=0, j=1; j < n; ) {
        if (v[i] > x) i++; 
        else if (v[i]==x) count++;
        else 
            while (sum < x) {
                
            }
        // j++;
    }

    cout << "Compilação bem-sucedida!" << endl;
    return 0;
}
