#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>
#include <sstream>

using namespace std;

int main() {

	while(true) {
		int n;
		cin >> n;
		cin.ignore(256, '\n');
		if(n == 0) break;

		map<string, set<string> > m;

		for(int i = 0; i < n; i++) {
			string line;
			getline(cin, line);			
			stringstream ss(line);
			
			string name, ord;
			ss >> name;
			while(ss >> ord) {
				m[ord].insert(name);
			}
		}

		for(const pair<string, set<string> >& p : m) {
			cout << p.first;
			for(const string& s : p.second) {
				cout << " " << s;
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}