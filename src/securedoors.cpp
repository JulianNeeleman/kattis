#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

set<string> in;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string d, p;
		cin >> d >> p;

		if (d == "entry") {
			cout << p << " entered";
			if (in.find(p) != in.end()) {
				cout << " (ANOMALY)";
			}
			in.insert(p);
		} else {
			cout << p << " exited";
			if (in.find(p) == in.end()) {
				cout << " (ANOMALY)";
			} 
			in.erase(p);
		}
		cout << endl;
	}

	return 0;
}