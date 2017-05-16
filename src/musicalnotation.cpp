#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

char g[500][14];

int main() {
	int n;
	cin >> n;

	string s;
	int i = 0;
	for (int t = 0; t < n; t++) {
		cin >> s;
		int r = i + (s.size() == 1 ? 1 : (int)s[1] - '0') + 1,
			p = tolower(s[0]) == s[0] ? (int)s[0] - 'a' : (int)s[0] - 'A' + 7;
		while (i < r) {
			if (i == r - 1 && t == n - 1) {
				break;
			}

			for (int j = 0; j < 14; j++) {
				if (j == p && i != r - 1) {
					g[i][j] = '*';
				} else if (j == 0 || j == 4 || j == 6 ||
					j == 8 || j == 10 || j == 12) {
					g[i][j] = '-';
				} else {
					g[i][j] = ' ';
				}
			}
			i++;
		}
		
	}

	for (int k = 13; k >= 0; k--) {
		if (k < 7) {
			cout << (char)(k + 'a') << ": ";
		} else {
			cout << (char)(k - 7 + 'A') << ": ";
		}

		for (int j = 0; j < i; j++) {
			cout << g[j][k];
		}
		cout << endl;
	}

	return 0;
}