#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int t[100000];

int main() {
	int N;
	cin >> N;

	int ans = 0;

	for (int i = 0; i < N; i++) {
		cin >> t[i];
	}

	sort(t, t + N);
	reverse(t, t + N);

	for (int i = 0; i < N; i++) {
		ans = max(ans, t[i] + i + 2);
	}

	cout << ans << endl;

	return 0;
}