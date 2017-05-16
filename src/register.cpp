
#include <iostream>

using namespace std;

int p[8] = { 2, 3, 5, 7, 11, 13, 17, 19 };

int main() {
	int m = 1, v, ans = 0;
	for (int i = 0; i < 8; i++) {
		cin >> v;
		ans += m * (p[i] - v - 1);
		m *= p[i];
	}

	cout << ans << endl;
	return 0;
}