#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int x[101], y[101];

int main() {
	int n;
	cin >> n;

	while (n--) {
		int m;
		cin >> m;

		for (int i = 0; i < m; i++) {
			cin >> x[i] >> y[i];
		}

		x[m] = x[0];
		y[m] = y[0];

		int ans = 0;
		for (int i = 0; i < m; i++) {
			ans += x[i + 1] * y[i] - x[i] * y[i + 1];
		}

		cout << abs(ans / 2);
		if (abs(ans) % 2 == 1) {
			cout << ".5";
		}
		cout << endl;
	}

	return 0;
}