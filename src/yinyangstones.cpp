#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	char c;
	int d = 0;
	
	while (cin >> c) {
		c == 'W' ? d-- : d++;
	}

	cout << (d == 0) << endl;

	return 0;
}