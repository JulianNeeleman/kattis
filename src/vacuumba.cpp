#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
	int n;
	cin >> n;

	while(n--) {
		int m;
		cin >> m;

		double x = 0.0, y = 0.0, theta = 90.0;
		for(int i = 0; i < m; i++) {
			double v, d;
			cin >> v >> d;
			theta += v;
			x += cos(theta / 180.0 * M_PI) * d;
			y += sin(theta / 180.0 * M_PI) * d;
		}
		cout << setprecision(20) << x << " " << y << endl;
	}

	return 0;
}