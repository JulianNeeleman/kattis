#include <algorithm>
#include <iostream>

using namespace std;

struct Point {
	int x, y;
};

Point p[26];
pair<int, string> m[10];
string k[3] = {
	"qwertyuiop",
	"asdfghjkl",
	"zxcvbnm"
};

int main() {
	for (int i = 0; i < 3; i++) {
		int n = k[i].size();
		for (int j = 0; j < n; j++) {
			p[(int)k[i][j] - 'a'] = { i , j };
		}
	}

	int t;
	cin >> t;

	while (t--) {
		string w;
		int l;
		cin >> w >> l;
		int n = w.size();

		for (int i = 0; i < l; i++) {
			cin >> m[i].second;
			m[i].first = 0;

			for (int j = 0; j < n; j++) {
				int a = w[j] - 'a', b = m[i].second[j] - 'a';
				m[i].first += abs(p[a].x - p[b].x) + abs(p[a].y - p[b].y);
			}
		}

		sort(m, m + l);

		for (int i = 0; i < l; i++) {
			cout << m[i].second << " " << m[i].first << endl;
		}
	}

	return 0;
}