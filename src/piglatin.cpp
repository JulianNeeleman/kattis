#include <iostream>
#include <queue>
#include <set>
#include <sstream>

using namespace std;

set<char> vs = { 'a', 'e', 'i', 'o', 'u', 'y'};

bool v(const char c) {
	return vs.find(c) != vs.end();
}

int main() {
	string line;
	while (getline(cin, line)) {
		stringstream ss(line);

		string w;
		while (ss >> w) {
			queue<char> q;
			bool f = false;
			for (const char& c : w) {
				if (!v(c) && !f) {
					q.push(c);
				} else if (!v(c)) {
					cout << c;
				} else {
					f = true;
					cout << c;
				}
			}

			if (q.empty()) {
				cout << "y";
			}

			while (!q.empty()) {
				cout << q.front();
				q.pop();
			}

			cout << "ay  ";
		}

		cout << endl;
	}

	return 0;
}