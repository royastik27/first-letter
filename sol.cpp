/**
 * AUTHOR: royastik27
**/

#include <iostream>
#include <map>

using namespace std;

#define LIM 100

class Solution {
	int n, m, hori[LIM][LIM];
	char a[LIM][LIM];
	map <int, int> mp;

	inline bool isPoint(char c) { return c == 'c'; }
	inline bool isLineStart(int i, int j) {
		return (hori[i][j] > j) && (j == 0 || hori[i][j-1] == -1);
	}
public:
	void solve() {
		// INPUT
		cin >> n >> m;
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j)
				cin >> a[i][j];

		// HORIZONTAL LINE END
		for(int i = 0; i < n; ++i) { // for each row (top -> bottom)
			// last column
			hori[i][m-1] = isPoint(a[i][m-1]) ? m-1 : -1;

			// rest of the columns
			for(int j = m-2; j >= 0; --j) {
				if(isPoint(a[i][j]))
					hori[i][j] = isPoint(a[i][j+1]) ? hori[i][j+1] : j;
				else
					hori[i][j] = -1;
			}
		}

		// VERTICAL PROCESSING
		int ans = 0;

		for(int j = m-1; j >= 0; --j) { // for each col (right -> left)
			mp.clear();
			for(int i = 0; i < n; ++i) {
				if(isPoint(a[i][j])) {
					// if there is a line
					if(isLineStart(i, j)) {
						int lineEndIdx = hori[i][j];

						ans += mp[lineEndIdx];
						++mp[lineEndIdx];
					}
				}
				else mp.clear();
			}
		}

		cout << ans << '\n';
	}
};

int main() {

	Solution sol;
	int TC;

	cin >> TC;

	while(TC--)
		sol.solve();

	return 0;
}