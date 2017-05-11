#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int p[51][21], l[51][21], r[51][21];
bool g[51][51], s[51];

void add(int i, int j, int c) {	
	// cout << i << " " << j << " " << c << endl;
	if (p[i][j] < p[i][c]) {
		if (l[i][c] > 0) {
			add(i, j, l[i][c]);
		} else {
			l[i][c] = j;
		}
	} else {
		if (r[i][c] > 0) {
			add(i, j, r[i][c]);
		} else {
			r[i][c] = j;
		}
	}
}

bool sr(int i, int j, int a, int b) {
	if (l[i][a] > 0 != l[j][b] > 0 ||
		r[i][a] > 0 != r[j][b] > 0) {
		return false;
	}

	bool iso = true;
	if (l[i][a] > 0 && l[j][b] > 0) {
		iso &= sr(i, j, l[i][a], l[j][b]);
	}

	if (r[i][a] > 0 && r[j][b] > 0) {
		iso &= sr(i, j, r[i][a], r[j][b]);
	}

	return iso;
}

int main() {
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			cin >> p[i][j];
			add(i, j, 0);
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			g[i][j] = sr(i, j, 0, 0);
		}
	}

	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (s[i]) {
			continue;
		}

		ans++;
		for (int j = 1; j <= n; j++) {
			if (g[i][j]) {
				s[j] = true;
			}
		}
	}

	cout << ans << endl;


	return 0;
}