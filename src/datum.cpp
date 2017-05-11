#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

string ds[7] = {
	"Thursday",
	"Friday",
	"Saturday",
	"Sunday",
	"Monday",
	"Tuesday",
	"Wednesday"
};

int ms[12] = { 
	31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

int main() {
	int D, M;
	cin >> D >> M;

	int d = 1, m = 1, i = 0;
	while (!(D == d && M == m)) {
		if (d >= ms[m - 1]) {
			d = 1;
			m++;
		} else {
			d++;
		}
		i++;
	}

	cout << ds[i % 7] << endl;

	return 0;
}