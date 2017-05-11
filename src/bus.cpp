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

	while(T--) {
		int k;
		cin >> k;
		int64_t s = 1, ans = 0;
		while(k--) {
			ans += s;
			s *= 2;
		}
		cout << ans << endl;
	}

	return 0;
}