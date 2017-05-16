#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

bool g[1001][1001];

int main() {
	int T;
	cin >> T;

	while (T--) {
		int n, m;
		cin >> n >> m;

		for (int i = 0; i < m; i++) {
			int a, b;
			cin >> a >> b;
			g[a][b] = true;
			g[b][a] = true;
		}

		int ans = 0;
		bool s[1001]{ false };
		queue<int> q;

		for (int i = 1; i <= n; i++) {
			if (s[i]) {
				continue;
			}

			s[i] = true;
			q.push(i);
			ans++;

			while (!q.empty()) {
				int c = q.front();
				q.pop();

				for (int j = 1; j <= n; j++) {
					if (!s[j] && g[c][j]) {
						s[j] = true;
						q.push(j);
					}
				}
			}
		}

		cout << n - ans << endl;
	}

	return 0;
}