#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

char g[20][20];

int main() {
	int c = 1;
	while (true) {
		int W, L;
		cin >> W >> L;

		if (W == 0 && L == 0) {
			break;
		}

		int x, y, dx, dy;
		for (int i = 0; i < L; i++) {
			for (int j = 0; j < W; j++) {
				cin >> g[i][j];
				if (g[i][j] == '*') {
					x = i, y = j;
					if (x == 0) {
						dx = 1, dy = 0;
					} else if (y == 0) {
						dx = 0, dy = 1;
					} else if (x == L - 1) {
						dx = -1, dy = 0;
					} else {
						dx = 0, dy = -1;
					}
					x += dx, y += dy;
				}
			}
		}

		while (g[x][y] != 'x') {
			if (g[x][y] == '/') {
				int tmp = dy;
				dy = -dx, dx = -tmp;
			} else if (g[x][y] == '\\') {
				swap(dx, dy);
			}
			x += dx, y += dy;
		}

		g[x][y] = '&';

		cout << "HOUSE " << c++ << endl;
		for (int i = 0; i < L; i++) {
			for (int j = 0; j < W; j++) {
				cout << g[i][j];
			}
			cout << endl;
		} 
	}

	return 0;
}