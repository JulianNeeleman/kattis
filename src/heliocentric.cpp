#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	int e, m, t = 0;
	while (cin >> e >> m) {
		int ans = 0;
		while (e != 0 || m != 0) {
			m = (m + 365 - e) % 687;
			ans += 365 - e;
			e = 0;
		}

		cout << "Case " << ++t << ": " << ans << endl;
	}

	return 0;
}