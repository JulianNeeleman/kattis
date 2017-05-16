#include <cmath>
#include <iostream>
#include <queue>

using namespace std;

int g[100][100],
	h[10001][4];

bool p(int n) {
	if (n < 2) {
		return false;
	}

	if (n == 2) {
		return true;
	}

	for (int i = 2; i <= sqrt(n) + 1; i++) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			g[i][j] = 0;
		}
	}

	int i = 49, j = 50, di = 1, dj = 0, k = 1;

	while (i >= 0) {
		g[i][j] = k++;
		i += di, j += dj;
		if (di == 1 && !g[i][j - 1]) {
			di = 0, dj = -1;
		} else if (di == -1 && !g[i][j + 1]) {
			di = 0, dj = 1;
		} else if (dj == 1 && !g[i + 1][j]) {
			di = 1, dj = 0;
		} else if (dj == -1 && !g[i - 1][j]) {
			di = -1, dj = 0;
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			h[g[i][j]][0] = (i > 0 && !p(g[i - 1][j]) ? g[i - 1][j] : 0);
			h[g[i][j]][1] = (i < 99 && !p(g[i + 1][j]) ? g[i + 1][j] : 0);
			h[g[i][j]][2] = (j > 0 && !p(g[i][j - 1]) ? g[i][j - 1] : 0);
			h[g[i][j]][3] = (j < 99 && !p(g[i][j + 1]) ? g[i][j + 1] : 0);
		}
	}

	int x, y, t = 1;
	while (cin >> x >> y) {
		cout << "Case " << t++ << ": ";

		bool s[10000]{ false };
		s[0] = true;
		queue<pair<int, int> > q;
		
		q.push({ x, 0 });
		s[x] = true;

		bool pos = false;
		while (!q.empty()) {
			int c = q.front().first,
				d = q.front().second;

			q.pop();

			if (c == y) {
				cout << d << endl;
				pos = true;
				break;
			}

			for (int i = 0; i < 4; i++) {
				if (!s[h[c][i]]) {
					q.push({ h[c][i], d + 1 });
					s[h[c][i]] = true;
				}
			}
		}

		if (!pos) {
			cout << "impossible" << endl;
		}
	}

	return 0;
}