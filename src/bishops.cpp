#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	int N;

	while (cin >> N) {
		cout << max(1, (N - 1) * 2) << endl;
	}

	return 0;
}