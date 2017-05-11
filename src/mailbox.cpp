#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int mem[11][101][101];

int solve(int k, int f, int t) {
	if (f > t) {
		return 0;
	}

	if (k == 0) {
		return (1 << 20);
	}

	if (mem[k][f][t] == 0) {
		mem[k][f][t] = (1 << 20);
		for (int m = f; m <= t; m++) {
			int a = m + solve(k - 1, f, m - 1),
				b = m + solve(k, m + 1, t),
				r = max(a, b);

			mem[k][f][t] = min(mem[k][f][t], r);
		}
	}

	return mem[k][f][t];
}

int main() {
	int N;
	cin >> N;

	while (N--) {
		int k, m;
		cin >> k >> m;

		cout << solve(k, 1, m) << endl;
	}

	return 0;
}