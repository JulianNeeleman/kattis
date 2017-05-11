#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	int n = 0, m = 0, p = 1, q = 1;
	while (N > 0 || M > 0) {
		if (N % 10 >= M % 10) {
			n += p * (N % 10);
			p *= 10;
		}

		if (M % 10 >= N % 10) {
			m += q * (M % 10);
			q *= 10;
		}

		N /= 10;
		M /= 10;
	}
	cout << (p == 1 ? "YODA" : to_string(n)) << endl;
	cout << (q == 1 ? "YODA" : to_string(m)) << endl;

	return 0;
}