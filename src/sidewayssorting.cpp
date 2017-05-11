#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int r, c;

bool cmp(const string& lhs, const string& rhs) {
	for (int i = 0; i < r; i++) {
		if (tolower(lhs[i]) != tolower(rhs[i])) {
			return tolower(lhs[i]) < tolower(rhs[i]);
		}
	}

	return false;
}

int main() {
	while (true) {
		cin >> r >> c;
		if (r == 0 && c == 0) {
			break;
		}

		string w[15]{""};

		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				char ch;
				cin >> ch;
				w[j] += ch;
			}
		}

		sort(w, w + c, cmp);

		for (int j = 0; j < r; j++) {
			for (int i = 0; i < c; i++) {
				cout << w[i][j];
			}
			cout << endl;
		}
		cout << endl;
	}


	return 0;
}