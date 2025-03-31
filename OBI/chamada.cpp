/* Vector
*  link: https://neps.academy/br/exercise/546
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k, i = 0;
    string name;
    vector<string> students;
    
    cin >> n >> k;
    while (i < n) {
        cin >> name;
        students.push_back(name);
        i++;
    }

    sort(students.begin(), students.end());
    cout << students[k-1] << endl;

    return 0;
}