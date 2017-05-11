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

	int a, b;
	cin >> a;
	for (int i = 1; i < N; i++) {
		cin >> b;
		int c = __gcd(a, b);
		cout << a / c << "/" << b / c << endl;
	}

	return 0;
}