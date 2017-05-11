#include <algorithm>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	double X, Y;
	cin >> X >> Y;

	if (X == 0 && Y == 1) {
		cout << "ALL GOOD" << endl;
	} else if (Y == 1) {
		cout << "IMPOSSIBLE" << endl;
	} else {
		cout << setprecision(20) << X / (1 - Y) << endl;
	}

	return 0;
}