#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

long int a[256], b[256], c[512];

int main() {
	int T;
	cin >> T;

	while (T--) {
		int n, m;
		cin >> n;

		for (int i = 0; i <= n; i++) {
			cin >> a[i];
		}

		cin >> m;

		for (int i = 0; i <= m; i++) {
			cin >> b[i];
		}

		for (int i = 0; i <= n + m; i++) {
			c[i] = 0;
		}

		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= m; j++) {
				c[i + j] += a[i] * b[j];
			}
		}

		cout << n + m << endl;
		for (int i = 0; i <= n + m; i++) {
			cout << c[i] << " ";
		}
		cout << endl;
	}

	return 0;
}