#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int solve(int n) {
	if (n == 3) {
		return 0;
	}

	int res = solve(n - 1);
	for (int a = 1, b = n - 3; b >= 1; a++, b--) {
		res += a * b;
	}

	return res;
}

int main() {
	int N;
	cin >> N;
	cout << solve(N) << endl;
	return 0;
}