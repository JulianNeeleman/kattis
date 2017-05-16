#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	int p, q, r, s;
	
	while (true) {
		cin >> p >> q >> r >> s;
		if (p == 0 && q == 0 && r == 0 && s == 0) {
			break;
		}

		int ans = 720;

		while (p != q) {
			p = (p + 39) % 40;
			ans += 9;
		}

		while (p != r) {
			p = (p + 1) % 40;
			ans += 9;
		}

		ans += 360;

		while (p != s) {
			p = (p + 39) % 40;
			ans += 9;
		}

		cout << ans << endl;
	}

	return 0;
}