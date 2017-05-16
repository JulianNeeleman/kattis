#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	int K;
	cin >> K;

	int a = 1, ans = 0;
	while (K > a) {
		a <<= 1;
		ans++;
	}

	while (K % 2 == 0) {
		ans += K % 2;
		K >>= 1;
		ans--;
	}

	cout << a << " " << ans << endl;

	return 0;
}