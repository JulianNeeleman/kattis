#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

struct State {
	int x, y;
	bool g[32][3];

	bool operator<(const State& rhs) const {
		if (x != rhs.x) {
			return x < rhs.x;
		}

		if (y != rhs.y) {
			return y < rhs.y;
		}

		for (int i = x; i < x + 2; i++) {
			for (int j = 0; j < 3; j++) {
				if (g[i][j] != rhs.g[i][j]) {
					return g[i][j] < rhs.g[i][j];
				}
			}
		}

		return false;
	}
};

map<State, int64_t> mem;

int64_t solve(State s) {
	if (s.x == 30 && s.y == 0) {
		return 1;
	}

	if (mem.find(s) == mem.end()) {
		State ns = s;

		if (ns.y < 2 && !ns.g[ns.x][ns.y + 1]) {
			ns.g[ns.x][ns.y] = true;			
			ns.g[ns.x][ns.y + 1] = true;
			while (ns.g[ns.x][ns.y]) {
				ns.y == 2 ? ns.y = 0, ns.x++ : ns.y++;
			}
			mem[s] += solve(ns);
			ns.g[ns.x][ns.y + 1] = false;
		}

		ns = s;
		ns.g[ns.x][ns.y] = true;

		if (ns.x < 29 && !ns.g[ns.x + 1][ns.y]) {
			ns.g[ns.x][ns.y] = true;			
			ns.g[ns.x + 1][ns.y] = true;
			while (ns.g[ns.x][ns.y]) {
				ns.y == 2 ? ns.y = 0, ns.x++ : ns.y++;
			}
			mem[s] += solve(ns);
			ns.g[ns.x + 1][ns.y] = false;
		}
	}

	return mem[s];
}

int main() {
	State s;
	s.x = 0, s.y = 0;

	for (int i = 0; i < 32; i++) {
		for (int j = 0; j < 3; j++) {
			s.g[i][j] = false;
		}
	}

	solve(s);

	int n;

	while (true) {
		cin >> n;
		if (n == -1) {
			return 0;
		}
		
		s.x = 30 - n;
		cout << solve(s) << endl;
	}

	return 0;
}