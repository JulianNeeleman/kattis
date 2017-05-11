#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int D[101], R[101], G[101];

int main() {
	int N, L;
	cin >> N >> L;

	int t = 0;
	D[0] = 0;
	for (int i = 1; i <= N; i++) {
		cin >> D[i] >> R[i] >> G[i];
		t += D[i] - D[i - 1];
		t += max(0, R[i] - t % (R[i] + G[i]));
	}

	t += L - D[N];

	cout << t << endl;

	return 0;
}