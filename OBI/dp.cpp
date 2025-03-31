#include <iostream>
#define NMAX 31

using namespace std;

int main(){
    int memo[NMAX] = {}, n;
    cin >> n;
    
    memo[0] = 1;
    memo[1] = 1;

    for(int i = 2; i <= n; i++)
        memo[i] = memo[i-1] + memo[i-2];
    cout << memo[n];
    
    return 0;
}

