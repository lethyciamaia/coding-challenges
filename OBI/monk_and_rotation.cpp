#include <iostream>
#include <vector>

// #define dbg(x) cout << #x << " = "<< x << endl
using namespace std;

int main() {
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		int n, k; cin >> n >> k;
		vector<int> a(n);
		for (int j = 0; j < n; j++) {
			cin >> a[(k+j)%n];
		}
		
		for(auto& j : a) cout << j << " ";
		cout << endl;
	}
	return 0;
}
