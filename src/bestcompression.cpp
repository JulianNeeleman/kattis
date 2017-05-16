
#include <iostream>

using namespace std;

int main() {
	int64_t N, b;
	cin >> N >> b;

	cout << (N < 1ULL << (b + 1) ? "yes" : "no") << endl;
	return 0;
}