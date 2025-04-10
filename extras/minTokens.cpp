// AA - 10/04
#include <bits/stdc++.h>
using namespace std;

vector<long> useMinimumTokens(vector<int> warehouse, vector<vector<long>> catalogs) {
    vector<long> minTokens; 
    int n = warehouse.size();
    
    vector<long> prefixsum(n+1, 0);
    for (int i=1; i<=n; i++) {
        prefixsum[i] = prefixsum[i-1] + warehouse[i-1];
    }
    
    for (auto& catalog : catalogs ){
        long minCapacity = catalog[0];
        long minCombined = catalog[1];
        long minToken = 1e18;
        
        long tokens;
        for (int i = 0; i < n; i++) {
            tokens = 0;
            if (warehouse[i] < minCapacity) {
                tokens += minCapacity - warehouse[i];  
            }

            long combinedCap;
            combinedCap = prefixsum[n] - warehouse[i];
            if (combinedCap < minCombined) {
                tokens += minCombined - combinedCap;
                tokens += (minCombined - combinedCap);
            }
            
            minToken = min(minToken, tokens);
        }
        minTokens.push_back(minToken);
    }
    return minTokens;
}

int main () {
    vector<int> ware = {5, 1, 1, 4};
    vector<vector<long> > catalogs = {{5, 7}, {4, 10}, {7, 9}};
    vector<long> min = useMinimumTokens(ware, catalogs);
    for (auto a : min) cout << a << endl;
    return 0;
}