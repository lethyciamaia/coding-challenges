/* Set 
*  link: https://neps.academy/br/exercise/252
*/

#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, id;
    set<int> attendance_list;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> id;
        attendance_list.insert(id);
    }
    cout << attendance_list.size() << endl;
    return 0;
}