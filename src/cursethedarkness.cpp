#include <iostream>

using namespace std;

int main() {
	int m;
	cin >> m;

	while (m--) {
		double X, Y;
		cin >> X >> Y;
		int n;
		cin >> n;

		bool light = false;
		for (int i = 0; i < n; i++) {
			double x, y;
			cin >> x >> y;

			if ((X - x) * (X - x) + (Y - y) * (Y - y) <= 64.00001) {
				light = true;
			}
		}

		if (light) {
			cout << "light a candle" << endl;
		} else {
			cout << "curse the darkness" << endl;
		}
	}

	return 0;
}