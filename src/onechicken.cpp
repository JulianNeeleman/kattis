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

	if (N < M) {
		cout << "Dr. Chaz will have " << M - N << " piece" << (M - N > 1 ? "s": "") << " of chicken left over!" << endl;
	} else {
		cout << "Dr. Chaz needs " << N - M << " more piece" << (N - M > 1 ? "s": "") << " of chicken!" << endl;
	}


	return 0;
}