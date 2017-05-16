#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	int ignore, n;
	char ch;

	while (cin >> ignore >> ch >> n) {
		int ans = 0;
		for (int m = n + 1; m <= 2 * n; m++) {
			if ((n * m) % (m - n) == 0) {
				ans++;
			}
		}
		cout << ans << endl;
	}



	return 0;
}