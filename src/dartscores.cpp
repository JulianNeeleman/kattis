#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		int n;
		cin >> n;

		int ans = 0;

		for (int i = 0; i < n; i++) {
			int x, y;
			cin >> x >> y;

			int ds = x * x + y * y,
				p = 10, r = 20;

			while (ds > r * r) {
				p--, r += 20;
			}

			ans += max(0, p);
		}

		cout << ans << endl;
	}

	return 0;
}