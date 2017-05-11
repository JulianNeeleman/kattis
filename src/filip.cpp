#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int m(int a) {
	int p = 100, ma = 0;
	while (a > 0) {
		ma += p * (a % 10);
		p /= 10;
		a /= 10;
	}
	return ma;
}

int main() {
	int A, B;
	cin >> A >> B;
	int mA = m(A), mB = m(B);
	cout << (mA < mB ? mB : mA) << endl;

	return 0;
}