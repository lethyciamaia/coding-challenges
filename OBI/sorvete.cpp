/* Pair
*  link: https://neps.academy/br/exercise/254
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int p, s, u, v;
    vector< pair<int, int> > ranges;
    pair<int, int> last_range;
    
    cin >> p >> s;
    for (int i = 0; i < s; i++) {
        cin >> u >> v;
        if (i == 0) { 
            ranges.push_back(make_pair(u, v)); 
            continue;
        }

        last_range = ranges.back();
        if (last_range.second > v) continue;

        if (last_range.second >= u) {
            ranges.pop_back();
            ranges.push_back(make_pair(last_range.first, v));
        } else {
            ranges.push_back(make_pair(u, v));
        }
    }

    for (auto i: ranges) {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    return 0;
}
