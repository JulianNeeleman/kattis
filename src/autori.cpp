#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	string s;
	cin >> s;

	bool p = true;
	for (const char& ch : s) {
		if (p) {
			cout << ch;
			p = false;
		}
		if (ch == '-') {
			p = true;
		}
	}
	cout << endl;

	return 0;
}