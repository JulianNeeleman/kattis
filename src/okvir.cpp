#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	int M, N;
	cin >> M >> N;
	int U, L, R, D;
	cin >> U >> L >> R >> D;

	for (int i = 0; i < M + U + D; i++) {
		for (int j = 0; j < N + L + R; j++) {
			if (i < U || j < L || i >= M + U || j >= N + L) {
				cout << (i % 2 == j % 2 ? '#' : '.');
			} else {
				char ch;
				cin >> ch;
				cout << ch;
			}
		}
		cout << endl;
	}

	return 0;
}