#include <iostream>

using namespace std;

int s[10], b[10];

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> s[i] >> b[i];
	}

	int ans = 1000000000;
	for (int i = 1; i < 1 << N; i++) {
		int S = 1, B = 0;
		for (int j = 0; j < N; j++) {
			if ((i >> j) % 2) {
				S *= s[j], B += b[j];
			}
		}
		ans = min(ans, abs(S - B));
	}

	cout << ans << endl;

	return 0;
}