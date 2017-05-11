#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	int N, W, H;
	cin >> N >> W >> H;

	for (int i = 0; i < N; i++) {
		int Z;
		cin >> Z;
		if (W * W + H * H >= Z * Z) {
			cout << "DA" << endl;
		} else {
			cout << "NE" << endl;
		}
	}

	return 0;
}