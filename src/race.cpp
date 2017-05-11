#include <algorithm>
#include <iostream>
#include <map>
#include <set>

using namespace std;

int n, T,
	p[21], v[20], d[22],
	g[22][22];

struct State {
	int b, c, t;

	bool operator<(const State& rhs) const {
		return tie(b, c, t) < tie(rhs.b, rhs.c, rhs.t);
	}
};

map<State, int> mem;
map<State, State> ngb;

int solve(const State& s) {
	if (s.t > d[s.c]) {
		return -1;
	}

	if (s.c == n + 1) {
		return 0;
	}

	if (mem.find(s) == mem.end()) {
		bool good = false;
		for (int i = 0; i < n + 2; i++) {
			if (i != s.c && (s.b >> i) % 2) {
				State ns = {
					s.b & ~(1 << s.c),
					i, s.t + g[s.c][i] 
				};
				int v = solve(ns);
				if (v >= 0) {
					good = true;
					if (mem[s] < v + p[s.c]) {
						mem[s] = v + p[s.c];
						ngb[s] = ns;
					}
				}
			}
		}

		if (!good) {
			mem[s] = -1;
		}
	}

	return mem[s];
}

int main() {
	cin >> n >> T;

	for (int i = 0; i < n; i++) {
		cin >> p[i] >> v[i] >> d[i];
		if (d[i] == -1) {
			d[i] = T;
		}
	}

	p[n] = 0;
	d[n + 1] = T;

	for (int i = 0; i < n + 2; i++) {
		for (int j = 0; j < n + 2; j++) {
			cin >> g[i][j];
			g[i][j] += v[j];
		}
	}

	State s = { (1 << (n + 2)) - 1, n, 0 };
	cout << solve(s) << endl;
	
	int ans[22], i;
	for (i = 0; s.c != n + 1; i++) {
		s = ngb[s];
		ans[i] = s.c + 1;
	}

	sort(ans, ans + i);
	for (int j = 0; j < i - 1; j++) {
		cout << ans[j] << " ";
	}
	cout << endl;

	return 0;
}