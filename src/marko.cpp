#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

map<char, char> d = {
	{'a', '2'},
	{'b', '2'},
	{'c', '2'},
	{'d', '3'},
	{'e', '3'},
	{'f', '3'},
	{'g', '4'},
	{'h', '4'},
	{'i', '4'},
	{'j', '5'},
	{'k', '5'},
	{'l', '5'},
	{'m', '6'},
	{'n', '6'},
	{'o', '6'},
	{'p', '7'},
	{'q', '7'},
	{'r', '7'},
	{'s', '7'},
	{'t', '8'},
	{'u', '8'},
	{'v', '8'},
	{'w', '9'},
	{'x', '9'},
	{'y', '9'},
	{'z', '9'}
};

map<string, int> mem;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		string t = "";
		for (const char& c : s) {
			t += d[c];
		}
		mem[t]++;
	}
	
	string m;
	cin >> m;
	cout << mem[m] << endl;

	return 0;
}