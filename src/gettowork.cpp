#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	int C;
	cin >> C;

	for (int c = 1; c <= C; c++) {

		int e[101]{0}, ans[101]{0};
		vector<int> m[101];

		int N, T;
		cin >> N >> T;

		int E;
		cin >> E;

		for (int i = 0; i < E; i++) {
			int H, P;
			cin >> H >> P;
			m[H].push_back(P);
			e[H]++;
		}

		bool good = true;

		for (int i = 1; i <= N; i++) {
			if (i == T) continue;
			sort(m[i].begin(), m[i].end());

			for (int j = m[i].size() - 1; e[i] > 0 && j >= 0; j--) {
				e[i] -= m[i][j];
				ans[i]++;
			}

			good &= (e[i] <= 0);
		}

		cout << "Case #" << c << ":";

		if (!good) {
			cout << " IMPOSSIBLE" << endl;
		} else {
			for (int i = 1; i <= N; i++) {
				cout << " " << ans[i];
			}
			cout << endl;
		}
	}

	return 0;
}