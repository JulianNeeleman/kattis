#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

double xs[1000], ys[1000];

int main() {
	int nx, ny;
	double w;

	while (true) {
		cin >> nx >> ny >> w;
		if (nx == 0 && ny == 0 && w == 0) {
			break;
		}

		xs[nx] = -(w / 2);
		xs[nx + 1] = 75 + w / 2;
		ys[ny] = -(w / 2);
		ys[ny + 1] = 100 + w / 2;

		for (int i = 0; i < nx; i++) {
			cin >> xs[i];
		}

		for (int i = 0; i < ny; i++) {
			cin >> ys[i];
		}

		sort(xs, xs + nx + 2);
		sort(ys, ys + ny + 2);

		bool good = true;

		for (int i = 0; i < nx + 1; i++) {
			if (xs[i + 1] - xs[i] > w) {
				good = false;
			}
		}

		for (int i = 0; i < ny + 1; i++) {
			if (ys[i + 1] - ys[i] > w) {
				good = false;
			}
		}

		cout << (good ? "YES" : "NO") << endl;
	}

	return 0;
}