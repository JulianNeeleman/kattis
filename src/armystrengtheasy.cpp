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
		int g, m;
		cin >> g >> m;

		int mg = 0, mm = 0, v;

		for (int i = 0; i < g; i++) {
			cin >> v;
			mg = max(mg, v);
		}

		for (int i = 0; i < m; i++) {
			cin >> v;
			mm = max(mm, v);
		}

		if (mg >= mm) {
			cout << "Godzilla" << endl;
		} else if (mg < mm) {
			cout << "MechaGodzilla" << endl;
		}
	}


	return 0;
}