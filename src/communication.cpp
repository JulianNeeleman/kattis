#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int t[256];

int main() {
	for (int x = 0; x < 256; x++) {
		t[(x ^ (x << 1)) % 256] = x;
	}

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		cout << t[b] << " ";
	}
	cout << endl;

	return 0;
}