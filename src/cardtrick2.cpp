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

		int a[13]{0};

		int i = 0, s = 1, c = 1;
		while (s <= n) {
			while (c > 0) {
				i = (i + 1) % n;
				if (a[i] == 0) {
					c--;
				}
			}
			a[i] = s;
			s++, c = s + 1;
		}

		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}

	return 0;
}