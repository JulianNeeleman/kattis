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
	cin.ignore(256, '\n');

	while (T--) {
		string line;
		getline(cin, line);
		int n = line.size();

		for (int i = 0; i < n; i++) {
			if (i < 11 && line[i] != "simon says "[i]) {
				break;
			}

			if (i >= 11) {
				cout << line[i];
			}
		}
		cout << endl;
	}

	return 0;
}