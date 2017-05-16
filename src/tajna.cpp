#include <cmath>
#include <iostream>

using namespace std;

char b[100][100];

int main() {
	string s;
	cin >> s;
	int n = s.size();

	for (int d = sqrt(n); d > 0; d--) {
		if (n % d == 0) {
			int R = d, C = n / d;

			for (int i = 0; i < n; i++) {
				b[i % R][i / R] = s[i];
			}

			for (int i = 0; i < R; i++) {
				for (int j = 0; j < C; j++) {
					cout << b[i][j];
				}
			}

			cout << endl;
			break;
		}
	}

	return 0;
}