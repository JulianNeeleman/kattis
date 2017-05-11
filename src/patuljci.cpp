#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int ds[9];

int main() {
	for (int i = 0; i < 9; i++) {
		cin >> ds[i];
	}

	for (int i = 0; i < (1 << 9); i++) {
		int v = 0, c = 0;
		for (int j = 0; j < 9; j++) {
			if ((i >> j) % 2) {
				v += ds[j];
				c++;
			}
		}
		if (v == 100 && c == 7) {
			for (int j = 0; j < 9; j++) {
				if ((i >> j) % 2) {
					cout << ds[j] << endl;
				}
			}
		}
	}

	return 0;
}