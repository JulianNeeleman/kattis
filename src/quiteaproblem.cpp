#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

string p = "problem";

int main() {
	string line;
	while (getline(cin, line)) {
		bool seen = false;
		int i = 0;
		for (const char& c : line) {
			if (p[i] == tolower(c)) {
				i++;
				if (i == 7) {
					seen = true;
					break;
				}
			} else {
				i = 0;
				if (p[i] == tolower(c)) {
					i++;
				}
			}
		}

		cout << (seen ? "yes" : "no") << endl;
	}
	return 0;
}