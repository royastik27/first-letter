/**
 * AUTHOR: royastik27
**/

#include <iostream>

using namespace std;

#define LIM 100

class Solution {
	int n, m, hori[LIM][LIM];
	char a[LIM][LIM];

	inline bool isPoint(int i, int j) { return a[i][j] == 'c'; }
	inline bool isHorizontalLineStart(int i, int j) {
		return (isPoint(i, j) && hori[i][j] > j && (j == 0 || !isPoint(i, j-1)));
	}
public:
	void solve() {
		// INPUT
		cin >> n >> m;
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j)
				cin >> a[i][j];

		// HORIZONTAL LINE ENDS
		for(int i = 0; i < n; ++i) { // for each row (top -> bottom)
			// last column
			hori[i][m-1] = isPoint(i, m-1) ? m-1 : -1;

			// rest of the columns
			for(int j = m-2; j >= 0; --j) {
				if(isPoint(i, j))
					hori[i][j] = isPoint(i, j+1) ? hori[i][j+1] : j;
				else
					hori[i][j] = -1;
			}
		}

		// PROCESSING VERTICAL LINES
		int ans = 0, lineStartRow;

		for(int j = 0; j < m; ++j) { // for each col (left -> right)

			lineStartRow = -1;

			for(int i = 0; i < n; ++i) { // for each row
				if(isPoint(i, j)) {
					// Case 1: Line start -> store start row index
					// Case 2: Line end -> process
					// Case 3: Line middle -> keep line start row index

					// MUST BE IF...ELSE IF, otherwise the start point of a separate horizontal line will be considered as both start and end
					// Case 1: Line start
					if(i == 0 || !isPoint(i-1, j)) {
						lineStartRow = i;
					}
					// Case 2: Line end
					else if(i == n-1 || !isPoint(i+1, j)) {
						// both ends have same length valid horizontal lines
						// if(hori[i][j] == hori[lineStartRow][j] && hori[i][j] > j)
						if(isHorizontalLineStart(i, j) && isHorizontalLineStart(lineStartRow, j) && hori[i][j] == hori[lineStartRow][j])
							++ans;
					}
					// else Case 3: Line middle -> keep the value of lineStartRow
				}
				else {
					// cleanup
					lineStartRow = -1;
				}
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