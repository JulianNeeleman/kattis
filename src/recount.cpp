#include <iostream>
#include <map>

using namespace std;

map<string, int> mem;

int main() {
	bool run = false;
	string win = "";
	while (true) {
		string line;
		getline(cin, line);

		mem[line]++;
		if (mem[line] > mem[win] || line == win) {
			run = false;
			win = line;
		} else if (mem[line] == mem[win]) {
			run = true;
		}

		if (line[0] == '*') {
			break;
		}
	}

	cout << (run ? "Runoff!" : win) << endl; 

	return 0;
}