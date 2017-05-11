#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		char R;
		cin >> R;
		int D, H, M;
		cin >> D >> H >> M;

		int T = 60 * H + M + (R == 'B' ? -D : D);
		T = (T + 24 * 60) % (24 * 60);

		cout << (T / 60) << " " << (T % 60) << endl;
	}

	return 0;
}