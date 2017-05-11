#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

string s[12];

int main() {
	for (int i = 0; i < 12; i++) {
		cin >> s[i];
	}

	bool found = false;
	for (int i = 0; i < 12; i++) {
		for (int j = i + 1; j < 12; j++) {
			for (int k = j + 1; k < 12; k++) {
				bool good = true;
				for (int p = 0; p < 4; p++) {
					good &= (s[i][p] == s[j][p] && s[j][p] == s[k][p]) ||
						(s[i][p] != s[j][p] && s[i][p] != s[k][p] && s[j][p] != s[k][p]);
				}

				if (good) {
					found = true;
					cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
				}
			}
		}
	}

	if (!found) {
		cout << "no sets" << endl;
	}

	return 0;
}