#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	int r, n;
	cin >> r >> n;
	
	vector<bool> s(r + 1);
	for(int i = 0; i < n; i++) {
		int v;
		cin >> v;
		s[v] = true;
	}

	for(int i = 1; i <= r; i++) {
		if(!s[i]) {
			cout << i << endl;
			return 0;
		}
	}

	cout << "too late" << endl;

	return 0;
}