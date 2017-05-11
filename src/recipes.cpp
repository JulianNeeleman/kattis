#include <algorithm>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

string n[20];
double w[20], p[20];

int main() {
	int T;
	cin >> T;

	for (int t = 1; t <= T; t++) {
		cout << "Recipe # " << t << endl;

		int R;
		double P, D;
		cin >> R >> P >> D;

		double sw;
		for (int i = 0; i < R; i++) {
			cin >> n[i] >> w[i] >> p[i];

			if (p[i] == 100) {
				sw = w[i] * D / P; 
			}
		}

		for (int i = 0; i < R; i++) {
			cout << n[i] << " " << setprecision(20) << p[i] * sw / 100.0 << endl; 
		}

		cout << "----------------------------------------" << endl;
	}
	return 0;
}