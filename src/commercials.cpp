#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	int N, P;
	cin >> N >> P;

	int ans = 0, cur = 0;
	for (int i = 0; i < N; i++) {
		int s;
		cin >> s;
		cur = max(s - P, cur + s - P);
		ans = max(ans, cur);
	}

	cout << ans << endl;

	return 0;
}