#include <iostream>

using namespace std;

uint64_t v[100]{ 0 };

int main() {
	int N, E, K, n;
	cin >> N >> E;

	for (int i = 0; i < E; i++) {
		bool p[100]{ false };
		cin >> K;

		for (int j = 0; j < K; j++) {
			cin >> n;
			p[n - 1] = true;
		}

		if (p[0]) {
			for (int j = 0; j < N; j++) {
				if (p[j]) {
					v[j] |= 1ULL << i;
				}
			}
		} else {
			uint64_t a = 0;
			for (int j = 1; j < 2 * N; j++) {
				if (j % N != 0 && p[j % N]) {
					a |= v[j % N];
					v[j % N] = a;
				}
			}
		}
	}

	for (int i = 0; i < N; i++) {
		if (v[0] == v[i]) {
			cout << i + 1 << endl;
		}
	}

	return 0;
}