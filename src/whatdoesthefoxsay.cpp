#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>
#include <sstream>

using namespace std;

int main() {
	int T;
	cin >> T;
	cin.ignore(256, '\n');

	while(T--) {
		string line;
		getline(cin, line);
		stringstream ss(line);

		vector<string> ws;
		string w;
		while(ss >> w) ws.push_back(w);

		set<string> m;
		while(true) {
			getline(cin, line);
			if(line == "what does the fox say?") break;
			stringstream ns(line);
			ns >> w >> w >> w;
			m.insert(w);
		}

		for(const string& s : ws) {
			if(m.find(s) == m.end()) {
				cout << s << " ";
			}
		}
		cout << endl;

	}

	return 0;
}