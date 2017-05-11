#include <iostream>
#include <queue>

using namespace std;

bool s[52][52];
char g[52][52];

int main() {
	int W, H;
	cin >> W >> H;

	queue<pair<int, int> > q;

	for (int i = 0; i <= H + 1; i++) {
		for (int j = 0; j <= W + 1; j++) {
			if (i == 0 || j == 0 || i == H + 1 || j == W + 1) {
				g[i][j] = '#';
			} else {
				cin >> g[i][j];
			}

			s[i][j] = false;

			if (g[i][j] == 'P') {
				q.push({ i, j });
				s[i][j] = true;
			}
		}
	}

	int ans = 0;

	while (!q.empty()) {
		int i = q.front().first, j = q.front().second;
		q.pop();

		bool safe = true;
		for (bool dir : { false, true }) {
			for (int d : { -1, 1 }) {
				if (g[i + dir * d][j + !dir * d] == 'T') {
					safe = false;
				} 
			}
		}

		if (!safe) {
			continue;
		}

		for (bool dir : { false, true }) {
			for (int d : { -1, 1 }) {
				int ni = i + dir * d, nj = j + !dir * d;
				if (!s[ni][nj] && g[ni][nj] != '#') {
					s[ni][nj] = true;
					q.push({ ni, nj });
					ans += g[ni][nj] == 'G'; 
				} 
			}
		}
	}

	cout << ans << endl;

	return 0;
}