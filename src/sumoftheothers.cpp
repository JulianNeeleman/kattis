#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <vector>

using namespace std;

int as[30];

int main() {
	string buffer;
	while (getline(cin, buffer)) {
		stringstream ss(buffer);
		int i, t = 0;
		for (i = 0; ss >> as[i]; i++) {
			t += as[i];
		}

		for (int j = 0; j < i; j++) {
			if (t == 2 * as[j]) {
				cout << as[j] << endl;
				break;
			}
		}
	}


	return 0;
}