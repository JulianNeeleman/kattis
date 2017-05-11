#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	int m;

	while (true) {
		cin >> m;

		if (m == 0) {
			break;
		}

		int x = 0, y = 0, c = 0, t = 0;
		while (true) {
			int w, h;
			cin >> w >> h;
			if (w == -1 && h == -1) {
				x = max(x, c);
				y += t;
				break;
			}

			if (c + w > m) {
				x = max(x, c);
				y += t;
				c = 0;
				t = 0;
			}

			c += w;
			t = max(t, h);
		}

		cout << x << " x " << y << endl;
	}
	return 0;
}