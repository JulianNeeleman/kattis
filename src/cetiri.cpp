#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int a[3];

int main() {
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}

	sort(a, a + 3);

	if (a[1] - a[0] < a[2] - a[1]) {
		cout << 2 * a[1] - a[0] << endl;
	} else if (a[1] - a[0] > a[2] - a[1]) {
		cout << a[0] + (a[2] - a[1]) << endl;
	} else {
		cout << 2 * a[2] - a[1] << endl;
	}

	return 0;
}