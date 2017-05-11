#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>
#include <sstream>

using namespace std;

int main() {
	int t = 1;

	while(true) {
		int n;
		cin >> n;
		cin.ignore(256, '\n');
		if(n == 0) break;

		map<string, int> m;
		for(int i = 0; i < n; i++) {
			string line;
			getline(cin, line);
			stringstream ss(line);
			string w;
			while(ss >> w);
			for(int j = 0; j < w.size(); j++) w[j] = tolower(w[j]);
			m[w]++;
		}

		cout << "List " << t++ << ":" << endl;
		for(const pair<string, int>& p : m) {
			cout << p.first << " | " << p.second << endl;
		}

	}

	return 0;
}