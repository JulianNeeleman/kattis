#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	int e, f, c;
	cin >> e >> f >> c;
	int b = e + f, ans = 0;

	while (b >= c) {
		ans += b / c;
		b = (b / c) + (b % c);
	}

	cout << ans << endl;

	return 0;
}