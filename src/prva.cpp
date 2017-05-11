#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

char g[20][20];

int main() {
	int R, C;
	cin >> R >> C;

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> g[i][j];	
		}
	}

	string ans = "zzzzzzzzzzzzzzzzzzzz";

	for (int i = 0; i < R; i++) {
		string cur = "";
		for (int j = 0; j <= C; j++) {
			if (g[i][j] == '#' || j == C) {
				if (cur.size() > 1) {
					ans = min(ans, cur);
				}
				cur = "";
			} else {
				cur += g[i][j];
			}
		}
	}

	for (int j = 0; j < C; j++) {
		string cur = "";
		for (int i = 0; i <= R; i++) {
			if (g[i][j] == '#' || i == R) {
				if (cur.size() > 1) {
					ans = min(ans, cur);
				}
				cur = "";
			} else {
				cur += g[i][j];
			}
		}
	}

	cout << ans << endl;

	return 0;
}