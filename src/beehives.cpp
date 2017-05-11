#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

struct Point {
	double x, y;
};

int main() {
	double d;
	int N;

	while (true) {
		cin >> d >> N;
		if (d == 0 && N == 0) {
			break;
		}

		Point p[100];
		bool s[100]{ false };

		for (int i = 0; i < N; i++) {
			cin >> p[i].x >> p[i].y;
		}

		for (int i = 0; i < N; i++) {
			for (int j = i + 1; j < N; j++) {
				if ((p[i].x - p[j].x) * (p[i].x - p[j].x) +
					(p[i].y - p[j].y) * (p[i].y - p[j].y) < d * d) {
					s[i] = true;
					s[j] = true;
				}
			}
		}

		int ans = 0;
		for (int i = 0; i < N; i++) {
			ans += s[i];
		}

		cout << ans << " sour, " << N - ans << " sweet" << endl;
	}

	return 0;
}