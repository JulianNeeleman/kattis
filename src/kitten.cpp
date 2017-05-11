#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <vector>

using namespace std;

int g[101];

int main() {
	int K;
	cin >> K;

	string buffer;
	while (getline(cin, buffer)) {
		stringstream ss(buffer);
		int a, b;
		ss >> a;
		while (ss >> b) {
			g[b] = a;
		}
	}

	while (K) {
		cout << K << " ";
		K = g[K];
	}
	cout << endl;

	return 0;
}