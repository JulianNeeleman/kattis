#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

char b[51][51]{'.'};

int s(int i, int j) {
	int r = 0;
	for (int di = -1; di <= 1; di++) {
		for (int dj = -1; dj <= 1; dj++) {
			r += (b[i + di][j + dj] == 'o');
		}
	}
	return r - 1;
}

int main() {
	int R, C;
	cin >> R >> C;

	for (int i = 1; i <= R; i++) {
		for (int j = 1; j <= C; j++) {
			cin >> b[i][j];
		}
	}

	int ans = 0, m = 0;
	for (int i = 1; i <= R; i++) {
		for (int j = 1; j <= C; j++) {
			if (b[i][j] == 'o') {
				ans += s(i, j);
			} else {
				m = max(m, s(i, j) + 1);
			}
		}
	}

	cout << ans / 2 + m << endl;

	return 0;
}