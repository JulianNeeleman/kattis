#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		int n;
		cin >> n;

		bool win = false;
		int b = 0, j = 0, c, s = 0;
		for (int i = 0; i < n; i++) {
			cin >> c;
			s += c;
			if (c > b) {
				win = true;
				b = c, j = i;
			} else if (c == b) {
				win = false;
			}
		}

		if (win && 2 * b > s) {
			cout << "majority winner " << j + 1 << endl;
		} else if (win) {
			cout << "minority winner " << j + 1 << endl;
		} else {
			cout << "no winner" << endl;
		}
	}

	return 0;
}