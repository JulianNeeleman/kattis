#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int g[8][8];

		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				g[i][j] = -1;
			}
		}

		char f;
		int r;
		cin >> f >> r;

		queue<pair<char, int> > q;
		q.push({ f, r });
		g[f - 'a'][r - 1] = 0;
		int m = 0;

		while (!q.empty()) {
			pair<char, int> p = q.front();
			q.pop();
			f = p.first, r = p.second;
			int d = g[f - 'a'][r - 1] + 1;

			for (int a : { -1, 1 }) {
				for (int b : { -1, 1 }) {
					for (bool c : { false, true }) {
						pair<char, int> np = {
							f + (c ? a : 2 * a),
							r + (c ? 2 * b : b)
						};

						char nf = np.first;
						int nr = np.second;

						if (nf >= 'a' && nf <= 'h' && nr >= 1 &&
							nr <= 8 && g[nf - 'a'][nr - 1] == -1) {
							g[nf - 'a'][nr - 1] = d;
							m = d;
							q.push(np);
						}
					}
				}
			}
		}

		cout << m;

		for (int j = 7; j >= 0; j--) {
			for (int i = 0; i < 8; i++) {
				if (g[i][j] == m) {
					cout << " " << (char)(i + 'a') << j + 1;
				}
			}
		}
		cout << endl;
	}

	return 0;
}