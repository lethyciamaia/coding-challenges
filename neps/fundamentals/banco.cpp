/* Queue
*  link: https://neps.academy/br/exercise/273
*/

#include <iostream>
#include <queue>
#include <vector>
// #include <bits/stdc++.h>

using namespace std;

int main(){
    queue< pair<int,int> > q; // t chegada, t demanda
    priority_queue<int, vector<int>, greater<int> > minheap;
    int c, n;
    int count = 0;
    cin>>c>>n;
    for(int i=0;i<c;i++) minheap.push(0);
    for (int i=0;i<n;i++){
        int t,d; cin >>t>>d;
        q.push(make_pair(t,d));
    }

    while(!q.empty()){
        int tmin = minheap.top();
        if (tmin > q.front().first+20) count++;
        minheap.pop();
        minheap.push(max(tmin, q.front().first) + q.front().second);
        q.pop();
    }
    cout << count<<endl;
    return 0;
}
