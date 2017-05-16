#include <iostream>

using namespace std;

int n, m, k[10], d[1000001];

int main() {
	while (cin >> n >> m) {
		for (int i = 0; i < m; i++) {
			cin >> k[i];			
		}

		d[0] = true;

		for (int i = 1; i <= n; i++) {
			d[i] = true;
			for (int j = 0; j < m; j++) {
				if (k[j] <= i) {
					d[i] &= !d[i - k[j]];
				}
			}
		}

		cout << (d[n] ? "Ollie" : "Stan") << " wins" << endl;
	}

	return 0;
}