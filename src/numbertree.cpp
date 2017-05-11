#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	int H;
	cin >> H;

	int64_t i = (1 << H + 1) - 1,
		s = 1;

	char c;
	while (cin >> c) {
		if (c == 'L') {
			i -= s;
			s *= 2;
		} else {
			i -= s + 1;
			s = (s * 2 + 1);
		}
	}

	cout << i << endl;
	
	return 0;
}