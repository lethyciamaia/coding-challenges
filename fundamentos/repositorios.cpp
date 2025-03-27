/* Stack
* link: https://neps.academy/br/exercise/277
*/

// #include <bits/stdc++.h>
#include <iostream>
#include <map>

using namespace std;

int main(){
    // Seu código vai aqui
    int c,n; cin>>c>>n;
    map<int,int> dict;
    map<int,int> update;

    for(int i=0;i<c;i++){
        int p,v; cin>>p>>v;
        dict[p] = v;
    }
    
    for(int i=0;i<n;i++){
        int p,v; cin>>p>>v;
        if(update.find(p) == update.end() && dict[p] < v) update[p] = v;
        else if(update.find(p) != update.end() && update[p] < v) update[p] = v;
    }

    for (auto it=update.begin();it!=update.end();it++)
        cout << it->first << " "<< it->second <<endl;

    return 0;
}
