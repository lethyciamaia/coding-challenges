#include <iostream>
#include <vector>

#define dbg(x) cout << #x << " = "<< x << endl
using namespace std;

#define f first
#define s second

int count_inv(vector<vector<int>> m, int n) { 
	int count=0;
	for (int i=0;i<n;i++)
        	for(int j=0;j<n;j++)
			for (int p = i; p<n; p++) 
				for (int q = j; q<n; q++)
					if (m[i][j] > m[p][q]) count++;
	return count;
}

int main() {
	int t; cin >> t;
	while(t>0) {
		int n; cin >> n;
		vector<vector<int>> m(n, vector<int>(n));
		for (int i=0; i<n; i++) 
			for (int j=0; j<n; j++)
				cin >> m[i][j];
		int count = count_inv(m, n);
		cout << count << endl;					
		t--;
	}
	return 0;
}
