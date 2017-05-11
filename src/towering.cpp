#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int h[6], ans[6];

int main() {
	for (int i = 0; i < 6; i++) {
		cin >> h[i];
	}

	int a, b;
	cin >> a >> b;

	for (int i = 0; i < (1 << 6); i++) {
		int s = 0, c = 0;
		for (int j = 0; j < 6; j++) {
			s += h[j] * ((i >> j) % 2);
			c += (i >> j) % 2;
		}

		if (s == a && c == 3) {
			int k = 0;
			for (int j = 0; j < 6; j++) {
				if ((i >> j) % 2 == 1) {
					ans[k++] = h[j];
				} 
			}

			for (int j = 0; j < 6; j++) {
				if ((i >> j) % 2 == 0) {
					ans[k++] = h[j];
				} 
			}

			sort(ans, ans + 3);
			reverse(ans, ans + 3);
			sort(ans + 3, ans + 6);
			reverse(ans + 3, ans + 6);

			for (int j = 0; j < 6; j++) {
				cout << ans[j] << " ";
			}
			cout << endl;
		}
	}

	return 0;
}