#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	int X, N;
	cin >> X >> N;

	int ans = X * (N + 1);
	
	for (int i = 0; i < N; i++) {
		int P;
		cin >> P;
		ans -= P;
	}

	cout << ans << endl;

	return 0;
}